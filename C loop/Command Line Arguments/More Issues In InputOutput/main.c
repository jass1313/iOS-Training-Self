//
//  main.c
//  Command Line Arguments
//
//  Created by KiwiTech on 02/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "stdio.h"

/*
 //Detecting Errors in Reading/Writing
int main( )
{
    FILE *fp ;
    char ch ;
    fp = fopen ( "TRIAL", "w" ) ;
    while ( !feof ( fp ) )
    {
        ch = fgetc ( fp ) ;
        if ( ferror(fp) )
        {
            perror ( "TRIAL" ) ;
            break ;
        }
        /if ( ferror(fp) )
        {
            printf ( "Error in reading file" ) ;
            break ;
        }/
        else
            printf ( "%c", ch ) ;
    }
    fclose ( fp ) ;
}
*/
/*
 //this program not working on XCODE C so plz use in c compiler
 //Standard I/O Devices
 //stdin standard input device (Keyboard)
 //stdout standard output device (VDU)
 //stderr standard error device (VDU)
 //stdprn and stdaux.
 
 // Prints file contents on printer
 int main( )
 {
 FILE *fp ;
 char ch ;
 fp = fopen ( "poem.txt", "r" ) ;
 if ( fp == NULL )
 {
 printf ( "Cannot open file" ) ;
 exit(0) ;
 }
 while ( ( ch = fgetc ( fp ) ) != EOF )
 fputc ( ch, stdprn ) ;
 
 fclose ( fp ) ;
 }
 */





// this concept of comand line tool not understand yet
 // to execute the program from the command prompt
 //Using argc and argv
 int main ( int argc, char *argv[ ] )
{
    FILE *fs, *ft ;
    char ch ;
    if ( argc != 3 )
    {
        puts ( "Improper number of arguments" ) ;
        exit(1) ;
    }
    fs = fopen ( argv[1], "r" ) ;
    if ( fs == NULL )
    {
        puts ( "Cannot open source file" ) ;
        exit(1) ;
    }
    ft = fopen ( argv[2], "w" ) ;
    if ( ft == NULL )
    {
        puts ( "Cannot open target file" ) ;
        fclose ( fs ) ;
        exit(1) ;
    }
    while ( 1 )
        // while((ch=fgetc(fs)!=EOF)
        // while (!feof(fs))
    {
        ch = fgetc ( fs ) ;
        if ( ch == EOF )
            break ;
        else
            fputc ( ch, ft ) ;
    }
    fclose ( fs ) ;
    fclose ( ft ) ;
}





/*
//I/O Redirection
//Redirecting the Output
 //To use redirection facility is to execute the program from the command prompt
 //this concept Redirecting the Output not understand yet completely
 //File name: main.c
#include "stdio.h"<+>
int main( )
{
    char ch ;
    while ( ( ch = getc ( stdin ) ) != EOF )
        putc ( ch, stdout ) ;
}
*/

/*
 //File name: ascii.c
int main( )
{
    int ch ;
    for ( ch = 0 ; ch <= 255 ; ch++ )
        printf ( "\n%d %c", ch, ch ) ;
}
*/

/*
//Redirecting the Input
//Both Ways at Once
//Redirection of input and output can be used together
//this concept Redirecting the input not understand yet completely
// to execute the program from the command prompt
*/
