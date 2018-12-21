//
//  main.c
//  excercise Data Management
//
//  Created by KiwiTech on 21/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
/*
 // A menu-driven program for elementary database management
int main( )
{
    FILE *fp, *ft ;
    char another, choice ;
    struct emp
    {
        char name[40] ;
        int age ;
        float bs ;
    } ;
    struct emp e ;
    char empname[40] ;
    long int recsize ;
    
    fp = fopen ( "EMP.DAT", "rb+" ) ;
    
    if ( fp == NULL )
    {
        fp = fopen ( "EMP.DAT", "wb+" ) ;
        if ( fp == NULL )
        {
            puts ( "Cannot open file" ) ;
            // exit( ) ;
        }
    }
    recsize = sizeof ( e ) ;
    
    while ( 1 )
    {
        printf ( "\n1. Add Records\n" ) ;
        printf ( "2. List Records\n" ) ;
        printf ( "3. Modify Records\n" ) ;
        printf ( "4. Delete Records\n" ) ;
        printf ( "0. Exit\n" ) ;
        printf ( "Your choice : \n" ) ;
        fflush ( stdin ) ;
        scanf("%c",&choice) ;
        switch ( choice )
        {
            case '1' :
                fseek ( fp, 0 , SEEK_END ) ;
                another = 'Y' ;
                while ( another == 'Y' )
                {
                    printf ( "\nEnter name, age and basic sal. " ) ;
                    scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ;
                    fwrite ( &e, recsize, 1, fp ) ;
                    printf ( "\nAdd another Record (Y/N) " ) ;
                    fflush ( stdin ) ;
                    scanf("%c",&another);
                }
                break ;
                
            case '2' :
                rewind ( fp ) ;
                while ( fread ( &e, recsize, 1, fp ) == 1 )
                    printf ( "\n%s %d %f", e.name, e.age, e.bs ) ;
                break ;
            case '3' :
                another = 'Y' ;
                while ( another == 'Y' )
                {
                    printf ( "\nEnter name of employee to modify " ) ;
                    scanf ( "%s", empname ) ;
                    rewind ( fp ) ;
                    while ( fread ( &e, recsize, 1, fp ) == 1 )
                    {
                        if ( strcmp ( e.name, empname ) == 0 )
                        {
                            printf ( "\nEnter new name, age & bs" ) ;
                            scanf ( "%s %d %f", e.name, &e.age,&e.bs ) ;
                            fseek ( fp, - recsize, SEEK_CUR ) ;
                            fwrite ( &e, recsize, 1, fp ) ;
                            break ;
                        }
                    }
                    printf ( "\nModify another Record (Y/N) " ) ;
                    fflush ( stdin ) ;
                      scanf("%c",&another);
                }
                break ;
                
            case '4' :
                another = 'Y' ;
                while ( another == 'Y' )
                {
                    printf ( "\nEnter name of employee to delete " ) ;
                    scanf ( "%s", empname ) ;
                    ft = fopen ( "TEMP.DAT", "wb" ) ;
                    rewind ( fp ) ;
                    while ( fread ( &e, recsize, 1, fp ) == 1 )
                    {
                        if ( strcmp ( e.name, empname ) != 0 )
                            fwrite ( &e, recsize, 1, ft ) ;
                    }
                    fclose ( fp ) ;
                    fclose ( ft ) ;
                    remove ( "EMP.DAT" ) ;
                    rename ( "TEMP.DAT", "EMP.DAT" ) ;
                    fp = fopen ( "EMP.DAT", "rb+" ) ;
                    printf ( "Delete another Record (Y/N) " ) ;
                    fflush ( stdin ) ;
                     scanf("%c",&another);
                }
                break ;
            case '0' :
                fclose ( fp ) ;
               // exit( ) ;
        }
    }
}*/




/* Low level Disk input output File-copy program which copies text, .com and .exe files */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
//#include "types.h" /* if present in sys directory use "c:tc\\include\\sys\\types.h" */
//#include "stat.h" /* if present in sys directory use "c:\\tc\\include\\sys\\stat.h" */

int main ( int argc, char *argv[ ] )
{
    char buffer[ 512 ], source [ 128 ], target [ 128 ] ;
    int inhandle, outhandle, bytes ;
    printf ( "\nEnter source file name" ) ;
    gets ( source ) ;
    inhandle = open ( source, O_RDONLY | O_BINARY ) ;
    if ( inhandle == -1 )
    {
        puts ( "Cannot open file" ) ;
        //exit( ) ;
    }
    printf ( "\nEnter target file name\n" ) ;
    gets ( target ) ;
    outhandle = open ( target, O_CREAT | O_BINARY| O_WRONLY,S_IWRITE ) ;
    if ( inhandle == -1 )
    {
        puts ( "Cannot open file" ) ;
        close ( inhandle ) ;
        //exit( ) ;
    }
    while ( 1 )
    {
        bytes = read ( inhandle, buffer, 512 ) ;
        if ( bytes > 0 )
            write ( outhandle, buffer, bytes ) ;
        else
            break ;
    }
    close ( inhandle ) ;
    close ( outhandle ) ;
}
