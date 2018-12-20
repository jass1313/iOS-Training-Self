//
//  main.c
//  File Input Output
//
//  Created by KiwiTech on 20/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
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
    fs = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/a structure to specify data of customers in a bank/a structure to specify data of customers in a bank/main.c", "r+" ) ;
   
    ft = fopen ( "/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "w+" ) ;
    
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
}*//*
// Receives strings from keyboard and writes them to file
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
/* Writes records to a file using structure */

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
    }
    fclose ( fp ) ;
}
