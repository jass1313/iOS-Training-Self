//
//  main.c
//  file Inclusion
//
//  Created by KiwiTech on 28/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//#define INTEL
/*
 int main( )
 {
 #ifdef INTEL
 printf("code suitable for a Intel PC\n");
 #else
 printf("code suitable for a Motorola PC\n");
 #endif
 printf("code common to both the computers\n");
 }*/

/*void myfunc(void);
int main(){
    myfunc();
}
*//*
#define TEST 2
int main( )
{
#if TEST <= 5
    printf("statement 1\n") ;
    printf("statement 2\n") ;
    printf("statement 3\n") ;
#else
    printf("statement 4\n") ;
    printf("statement 5\n") ;
    printf("statement 6\n") ;
#endif
}
   */
/*
#define ADAPTER 2
#define SVGA 2

int main(){
#if ADAPTER == VGA
    printf("code for video graphics array");
#else
#if ADAPTER == SVGA
    printf("code for super video graphics array");
#else
    printf("code for extended graphics adapter");
#endif
#endif
}
*/
/*
#define ADAPTER 3
#define SVGA 3

int main(){
#if ADAPTER == VGA
    printf("code for video graphics array");
#elif ADAPTER == SVGA
    printf("code for super video graphics array");
#else
    printf("code for extended graphics adapter");
#endif
}
*//*
//first define
#define PENTIUM
//second undefine and ifdef PENTIUM evaluate to false
#undef PENTIUM

int main(){
#ifdef PENTIUM
    printf("code for video graphics array");
#else
    printf("code for extended graphics adapter");
#endif
}
*/
/*
void fun1(void) ;
void fun2(void) ;
#pragma startup fun1
#pragma exit fun2
int main( )
{
    printf ( "\nInside main " ) ;
}
void fun1(void)
{
    printf ( "\nInside fun1" ) ;
}
void fun2(void)
{
    printf ( "\nInside fun2" ) ;
}
*//*
#pragma warn -rvl // return value
#pragma warn -par // parameter not used
#pragma warn -rch // unreachable code
int f1( )
{
    int a = 5 ;
}
void f2 ( int x )
{
    printf ( "\nInside f2" ) ;
}
int f3( )
{
    int x = 6 ;
    return x ;
    x++ ;
}
void main( ) {
f1( ) ;
f2 ( 7 ) ;
f3( ) ;
}
*/
/*
int display ( int *q, int row, int col );
int show ( int ( *q )[4], int row, int col );
int print ( int q[ ][4], int row, int col );
int main( )
{
    int a[3][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 0, 1, 6
    } ;
    display ( a, 3, 4 ) ;
    show ( a, 3, 4 ) ;
    print ( a, 3, 4 ) ;
}
int display ( int *q, int row, int col )
{
    int i, j ;
    for ( i = 0 ; i < row ; i++ )
    {
        for ( j = 0 ; j < col ; j++ )
            printf ( "%d ", *(q+i*col+j) ) ;
        printf ( "\n" ) ;
    }
    printf ("\n" ) ;
    return 0;
}
int show ( int ( *q )[4], int row, int col )
{
    int i, j ;
    int *p ;
    for ( i = 0 ; i < row ; i++ )
    {
        p = q + i ;
        for ( j = 0 ; j < col ; j++ )
            printf ( "%d ", * ( p + j ) ) ;
        printf ( "\n" ) ;
    }
    printf ( "\n" ) ;
    return 0;
}
int print ( int q[ ][4], int row, int col )
{
    int i, j ;
    for ( i = 0 ; i < row ; i++ )
    {
        for ( j = 0 ; j < col ; j++ )
            printf ( "%d ", q[i][j] ) ;
        printf ( "\n" ) ;
    }
    printf ( "\n" ) ;
    return 0;
}
*//*
int main( )
{
    int *arr[4] ;
    int i = 31, j = 5, k = 19, l = 71, m ;
    arr[0] = &i ;
    arr[1] = &j ;
    arr[2] = &k ;
    arr[3] = &l ;
    for ( m = 0 ; m <= 3 ; m++ )
        printf ( "%d ", * ( arr[m] ) ) ;
}*/

/*
int main( )
{
     int a[ ] = {10, 20, 30, 40, 50 } ;
    int *p[ ] = { a, a + 1, a + 2, a + 3, a + 4 } ;
    printf ( "\n%u %u %d", a, *p, * ( *p ) ) ;
}
*//*
int main( )
{
    char str1[ ] = "Hello" ;
    char str2[] ;
    char *str ;
    char *s = "Good Morning" ;
    char *q ;
   //str1=str1; //error
    str = str1 ; // works
    q = s ; // works
}
*//*
int main( )
{
    char str1[ ] = "Hello" ;
    char *p = "Hello" ;
    //str1 = "Bye" ; // error
    p = "Bye" ; // works
}
*/
int main( )
{
    char source[ ] = "Sayonara " ;
    char target[20] = "Jasbeer " ;
    strcat ( target, source ) ;
    printf ( "\nsource string = %s", source ) ;
    printf ( "\ntarget string = %s", target ) ;
}
