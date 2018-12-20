//
//  main.c
//  Output
//
//  Created by KiwiTech on 19/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
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
/*int main( )
{
    char footballer[40] ;
    puts ( "Enter name" ) ;
    gets ( footballer ) ;
    puts ( "Happy footballing!" ) ;
    puts ( footballer ) ;
}*//*
int main( )
{
    int i = 2 ;
    float f = 2.5367 ;
    char str[ ] = "Life is like that" ;
    printf ( "\n%4d\t%3.3f\t%30s", i, f, str ) ;
}*//*
int main( )
{
    printf ( "More often than \b\b not \rthe person who \
                wins is the one who thinks he can!" ) ;
}*//*
int main( )
{
char buffer[50] ;
int no = 97;
double val = 2.34174 ;
char name[10] = "Shweta" ;
sprintf ( buffer, "%d %lf %s", no, val, name ) ;
printf ( "\n%s", buffer ) ;
    
    
sscanf ( buffer, "%d %lf %s", &no, &val, name ) ;
printf ( "\n%s", buffer ) ;
printf ( "\n%d %lf %s", no, val, name ) ;
}
*//*
void xgets(char ch[0]);
void xputs(char ch1[0]);
int main(){
    char ch[10];
    xgets(ch);
    
}
void xgets(char ch1[0]){
    printf("enter");
    scanf("%s",ch1);
    xputs(ch1);
    
}
void xputs(char ch1[0]){
    printf("%s",ch1);
}*/
int getint(int b);
int main( )
{
    int a=0 ;
    a = getint(a) ;
    printf ( "you entered %d", a );
}
int getint(int b){
    printf("enter");
     scanf("%d",&b);
    return b;
}
