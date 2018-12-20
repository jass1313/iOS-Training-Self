//
//  main.c
//  Output
//
//  Created by KiwiTech on 19/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
/*
 int main( )
 {
 int weight = 63 ;
 printf ( "\nweight is %d kg", weight ) ;
 printf ( "\nweight is %2d kg", weight ) ;
 printf ( "\nweight is %4d kg", weight ) ;
 printf ( "\nweight is %6d kg", weight ) ;
 printf ( "\nweight is %-6d kg", weight ) ;
 }*//*
     int main( )
     {
     char firstname1[ ] = "Sandy" ;
     char surname1[ ] = "Malya" ;
     char firstname2[ ] = "AjayKumar" ;
     char surname2[ ] = "Gurubaxani" ;
     printf ( "\n%20s%20s\a", firstname1, surname1 ) ;
     printf ( "\n%20s%20s", firstname2, surname2 ) ;
     }*//*
         
         int main( )
         {
         int i = 10, j;
         char ch = 'A',ch1 ;
         float a = 3.14,b ;
         char str[20] ;
         printf ( "\n%d %c %f", i, ch, a ) ;
         sprintf ( str, "%d %c %f", i, ch, a ) ;
         printf ( "\n%s", str ) ;
         
         sscanf(str, "%d %c %f", &j, &ch1, &b);
         
         printf("\n%d %c %f", j, ch1, b);
         }*/
int main( )
{
    char footballer[40] ;
    puts ( "Enter name" ) ;
    gets ( footballer ) ;
    puts ( "Happy footballing!" ) ;
    puts ( footballer ) ;
}
