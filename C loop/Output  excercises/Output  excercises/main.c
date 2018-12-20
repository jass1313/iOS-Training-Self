//
//  main.c
//  Output  excercises
//
//  Created by KiwiTech on 19/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
int main( )
{
    char ch ;
    printf ( "\nPress any key to continue" ) ;
   // getch( ) ; // will not echo the character
    printf ( "\nType any character" ) ;
    //ch = getche( ) ; // will echo the character typed
    printf ( "\nType any character" ) ;
    ch = getchar() ; // will echo character, must be followed by enter key
    putchar(ch);
    printf ( "\nContinue Y/N" ) ;
    //fgetchar( ) ; // will echo character, must be followed by enter key
}*/
/*

int main()
{
    char ch = 'A' ;
  //  putch ( ch ) ;
    putchar ( ch ) ;
   // fputchar ( ch ) ;
   // putch ( 'Z' ) ;
    putchar ( 'Z' ) ;
  //  fputchar ( 'Z' ) ;
}*/

char p[ ] = "The sixth sick sheikh's sixth ship is sick" ;
int main( )
{
    int i = 0 ;
    while ( p[i] != '\0' )
    {
        putchar( p[i] ) ;
        i++ ;
    }
}

