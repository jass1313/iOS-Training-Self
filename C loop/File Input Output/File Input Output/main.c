//
//  main.c
//  File Input Output
//
//  Created by KiwiTech on 20/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 //In this program too we have opened the file for reading and then read it character by character.
 int main( )
 {
 FILE *fp ;
 char ch ;
 int nol = 0, not = 0, nob = 0, noc = 0 ;
 fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/a structure to specify data of customers in a bank/a structure to specify data of customers in a bank/main.c", "r" ) ;
 while ( 1 )
 {
 ch = fgetc ( fp ) ;
 
 if ( ch == EOF )
 break ;
 printf ( "%c", ch ) ;
 //for count the program characters
 noc++ ;
 if ( ch == ' ' )
 nob++ ;
 if ( ch == '\n' )
 nol++ ;
 if ( ch == '\t' )
 not++ ;
 
 }
 fclose ( fp ) ;
 printf ( "\nNumber of characters = %d", noc ) ;
 printf ( "\nNumber of blanks = %d", nob ) ;
 printf ( "\nNumber of tabs = %d", not ) ;
 printf ( "\nNumber of lines = %d", nol ) ;
 }*//*
     
     //Note that our sample file-copy program is capable of copying only text files.
     int main( )
     {
     FILE *fs, *ft ;
     char ch ;
     fs = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/excercise Data Management/excercise Data Management/main.c", "r+" ) ;
     
     ft = fopen ( "/Applications/TurboC++/TC/BIN/NONAME01.C", "w+" ) ;
     
     while ( 1 )
     {
     ch = fgetc ( fs ) ;
     if ( ch == EOF )
     break ;
     else
     fputc ( ch, ft ) ;
     }
     fclose ( fs ) ;
     fclose ( ft ) ;
     }*/
/*
 //Receives strings from keyboard and writes them to file
 #include "stdio.h"
 int main( )
 {
 FILE *fp ;
 char s[20] ;
 fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "w" ) ;
 
 printf ( "\nEnter a few lines of text:\n" ) ;
 while ( strlen (gets(s))>0)
 {
 fputs ( s, fp ) ;
 fputs ( "\n", fp ) ;
 }
 
 fclose ( fp ) ;
 }*//*
     // Reads strings from the file and displays them on screen
     #include "stdio.h"
     int main( )
     {
     FILE *fp ;
     char s[80] ;
     fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r" ) ;
     
     while ( fgets ( s, 79, fp ) != NULL )
     printf ( "%s" , s ) ;
     fclose ( fp ) ;
     }*/

/*
 // Writes records to a file using structure
 
 int main( )
 {
 FILE *fp ;
 int another = 1 ;
 struct emp
 {
 char name[40] ;
 int age ;
 float bs ;
 } ;
 struct emp e ;
 fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "w" ) ;
 
 while ( another == 1 )
 {
 printf ( "\nEnter name, age and basic salary: " ) ;
 scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ;
 fprintf ( fp, "%s %d %f\n", e.name, e.age, e.bs ) ;
 printf ( "Add another record (Y1/N0) " ) ;
 //It is designed to remove or ‘flushout’ any data remaining in the buffer.
 fflush ( stdin ) ;
 scanf("%d",&another);
 } if (another != 1){
 printf("Recoord sucessfull submit");
 }
 fclose ( fp ) ;
 }*/
/*
 // Read records from a file using structure
 int main( )
 {
 FILE *fp ;
 struct emp
 {
 char name[40] ;
 int age ;
 float bs ;
 } ;
 struct emp e ;
 fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r" ) ;
 
 if ( fp == NULL )
 {
 puts ( "Cannot open file" ) ;
 
 }
 while ( fscanf ( fp, "%s %d %f", e.name, &e.age, &e.bs ) != EOF )
 printf ( "\n%s %d %f", e.name, e.age, e.bs ) ;
 fclose ( fp ) ;
 }*//*
     //We can improve the same program to make it capable of copying text as well as binary files
     int main( )
     {
     FILE *fs, *ft ;
     int ch ;
     //use c compiler file noname00
     fs = fopen ( "//Applications/TurboC++/TC/BIN/NONAME00.EXE", "rb" ) ;
     if ( fs == NULL )
     {
     puts ( "Cannot open source file" ) ;
     
     }
     //use c compiler file noname01
     ft = fopen ( "/Applications/TurboC++/TC/BIN/NONAME01.EXE", "wb" ) ;
     if ( ft == NULL )
     {
     puts ( "Cannot open target file" ) ;
     fclose ( fs ) ;
     
     }
     while ( 1 )
     {
     ch = fgetc ( fs ) ;
     if ( ch == EOF )
     break ;
     else
     fputc ( ch, ft ) ;
     }
     fclose ( fs ) ;
     fclose ( ft ) ;
     }*/

/*
 // Receives records from keyboard and writes them to a file in binary mode
 
 int main( )
 {
 FILE *fp ;
 int another = 1 ;
 struct emp
 {
 char name[40] ;
 int age ;
 float bs ;
 } ;
 struct emp e ;
 
 fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "wb" ) ;
 
 while ( another == 1 )
 {
 printf ( "\nEnter name, age and basic salary: " ) ;
 scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ;
 fwrite ( &e, sizeof ( e ), 1, fp ) ;
 printf ( "Add another record (Y1/N0) " ) ;
 fflush ( stdin ) ;
 scanf("%d",&another);
 }
 fclose ( fp ) ;
 }
 */
/*
 /Reads records from binary file and displays them on VDU
 int main( )
 {
 FILE *fp ;
 struct emp
 {
 char name[40] ;
 int age ;
 float bs ;
 } ;
 struct emp e ;
 fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "rb" ) ;
 if ( fp == NULL )
 {
 puts ( "Cannot open file" ) ;
 //  exit( ) ;
 }
 while ( fread ( &e, sizeof ( e ), 1, fp ) == 1 )
 printf ( "\n%s %d %f", e.name, e.age, e.bs ) ;
 fclose ( fp ) ;
 }
 *//*
    Excercises chapter 11th
    //read binary file using fuction
    void openfile ( char *fn, FILE **f );
    int main( )
    {
    FILE *fp ;
    
    openfile ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", &fp ) ;
    if ( fp == NULL )
    printf ( "Unable to open file…" ) ;
    }
    void openfile ( char *fn, FILE **f )
    { char ch;
    *f = fopen ( fn, "r" ) ;
    if ( *f != NULL )
    printf ( "file is open sucessfully…" ) ;
    
    ch=fgetc(*f);
    while (fread ( &ch, sizeof ( ch ), 1, *f ) == 1 ){
    printf ( "\n%c", ch ) ;
    
    }
    
    fclose ( *f ) ;
    }*//*
        int main( )
        {
        FILE *fp ;
        char c ;
        fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c" ,"r") ;
        if ( fp == NULL )
        {
        puts ( "Cannot open file" ) ;
        }
        while ( ( c = getc ( fp ) ) != EOF )
        putchar ( c ) ;
        
        fclose ( fp ) ;
        }*//*
            int main( )
            {
            char fname[ ] = "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c" ;
            FILE *fp ;
            fp = fopen ( fname, "r" ) ;
            if ( fp != NULL )
            printf ( "\nFile is opened Sucessfuly..." ) ;
            }
            *//*
               int main( )
               {
               FILE *fp ;
               char str[80] ;
               fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r" ) ;
               while ( fgets ( str, 79, fp ) != NULL )
               puts(str);
               fclose ( fp ) ;
               }*//*
                   int main()
                   {
                   char ch ;
                   FILE *fp ;
                   fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r" ) ;
                   while ( ( ch = getc ( fp ) ) != EOF )
                   printf ( "%c", ch ) ;
                   fclose ( fp ) ;
                   }
                   *//*
                      
                      int main( )
                      {
                      FILE *fp ;
                      char name[25] ;
                      int age ;
                      
                      fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r" ) ;
                      while ( fscanf ( fp, "%s %d", name, &age ) != EOF )
                      printf("%s %d ",name,age);
                      
                      fclose ( fp ) ;
                      }
                      *//*
                         int main( )
                         {
                         FILE *fp ;
                         char names[20] ;
                         int i ;
                         fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "wb" ) ;
                         for ( i = 0 ; i <= 10 ; i++ )
                         {
                         puts ( "\nEnter name " ) ;
                         gets ( names ) ;
                         fwrite ( names, sizeof(names), 1, fp ) ;
                         }
                         fclose ( fp ) ;
                         }*//*
                             int main( )
                             {
                             FILE *fp ;
                             char name[20] = "Ajay" ;
                             int i ;
                             fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "wb" ) ;
                             for ( i = 0 ; i <= 10 ; i++ )
                             fwrite ( name, sizeof ( name ), 1, fp ) ;
                             fclose ( fp ) ;
                             }*//*
                                 
                                 int main( )
                                 {
                                 FILE *fp ;
                                 fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c" , "r" ) ;
                                 if ( fp == NULL )
                                 puts ( "cannot open file" ) ;
                                 else
                                 fclose ( fp ) ;
                                 }*//*
                                     int main( )
                                     {
                                     FILE *fp ;
                                     fp = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "rb" ) ;
                                     if ( fp == NULL )
                                     puts ( "cannot open file" ) ;
                                     else
                                     fclose ( fp ) ;
                                     }
                                     */

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
}
/*
 
 
 
 // Low level Disk input output File-copy program which copies text, .com and .exe files
 #include <sys/types.h>
 #include "types.h" // if present in sys directory use "c:tc\\include\\sys\\types.h"
 #include "stat.h" // if present in sys directory use "c:\\tc\\include\\sys\\stat.h"
 #include <sys/stat.h>
 #include <fcntl.h>
 #include <sys/fcntl.h>
 #include <stdlib.h>
 #include <unistd.h>
 #include <stdio.h>
 
 
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
 */
