//
//  main.cpp
//  C++
//
//  Created by KiwiTech on 26/10/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//
#include <stdio.h>
//#include <iostream>
/*
 int fun(int);
int main()
{
    int x=5;
  //  scanf("%d", &x);
    fun(x);
}
int fun(int z)
{
 */
    /*int a,b;
     for(a=1;a<=z;a++)
     {
     for(b=1;b<=a;b++)
     {
     printf("* ");
     }
     printf("\n");
     }
     return(0);
     */
    
    
    /*
     int x,a;
     
     for(x=1;x<=z;x++)
     {
     for(a=1;a<=x;a++)
     {
     printf("%d", a);
     
     }
     printf("\n");
     }
     
     return(0);
     */
    
    
    
    /*
     int x,a;
     
     for(x=1;x<=z;x++)
     {
     for(a=x;a>0;a--)
     {
     printf("%d", a);
     
     }
     printf("\n");
     }
     
     return(0);
    */
    
    
    
    /*
    int x,a;
    
    for(x=1;x<=z;x++)
    {
        
        for(a=1;a<=x;a++)
        {
            printf("%d ", x);
            
        }
        
        printf("\n");
    }
    
    return(0);
    */
    /*
    
    
    int x,a;
    
    for(x=1;x<=z;x++)
    {
        for(a=1;a<=x;a++)
        {
            printf(" %d ", x);
        }
            printf("\n");
    }
        return(0);
}
     */

/*

int main()
{
   static int i = 0;
   i++;
    
    if(i<=5)
    {
        printf("\n%d\n", i);
        main();
    }
    else
        return(0);
}


*//*

int rec(int);
int main()
{
    int a,sum;
    printf("Enter a 5 digit positive integer \n");
    scanf("%d",&a);
    if (a<0||a>99999)
    {
        return printf("Please enter the number between 0 to 99999");
    }
    sum=rec(a);
    printf("%d", sum);
}
   int rec(int a)
{
    
    if (a<10)
        return(a);
    else
        
   return a%10 + rec(a/10);
}
   */



/*
int main()
{
    int rec=0,r,a;
    printf("Enter a 5 digit positive integer \n");
    scan : scanf("%d",&a);
    if (a<1||a>99999)
    {
         printf("Please enter the number between 1 to 99999 \n");
        goto scan;
    } else {
    for(a=a;a>0;)
    {
        r=a%10;
        rec=rec+r;
        a/=10;
    }
   printf("%d ",rec);
    }
}
 */
/*

int main()
 {
    int number= 6;
    int fact= 2;
     
     while(number != 0)
     {
         if (number%fact !=0)
             fact=fact+1;
             
             else
             {
                 number=number/fact;
                    printf("%d ", fact);
             }
                    if (number==1)
                        break;
     }
 
     int a = sizeof(int);
     printf("\n%d\n", a);
 
}  */
/*
int t = 8 ;
int f(int);
int g(int);
int main( )
{
    int x, y, s = 2 ;
    s *= 3 ;
    y = f ( s ) ;
    x = g ( s ) ;
    printf ( "\n%d %d %d", s, y, x ) ;
}
int f ( int a )
{
    a += -5 ;
    t -= 4 ;
    return ( a + t ) ;
}
int g ( int a )
{
    a = 1 ;
    t += a ;
    return ( a + t ) ;
}
*/ /*
void fun1( ) ;
void fun2( ) ;
#pragma startup fun1
#pragma exit fun2
int main( )
{
    printf ( "\nInside maim" ) ;
}
void fun1( )
{
    printf ( "\nInside fun1" ) ;
}
void fun2( )
{
    printf ( "\nInside fun2" ) ;
} */

/*

#define ADAPTER 'z'
#define VGA 97
int main( )
{
#if ADAPTER < VGA
    printf("its not a small");
#else
    printf("its a small" );
#endif
                
} *//*

int main( )
{
    int avg, sum = 0 ;
    int i ;
    int marks[5];
    
     for ( i = 0 ; i <= 4 ; i++ )
    {
        printf ( "\nEnter marks " ) ;
        scanf ( "%d", &marks[i] ) ;
    //}
    //for ( i = 0 ; i <= 29 ; i++ )
        sum = sum + marks[i] ;
    avg = sum / 30 ;
    }
    printf ( "\nAverage marks = %d", avg ) ;
} */ /*
int disp(int *n);
int show(int *k);
int main( )
{
    int i ;
    int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ;
    for ( i = 0 ; i <= 6 ; i++ )
        disp ( &marks[i] ) ;
}

int disp ( int *n )
{
     printf ( "n %d ", *n ) ;
    show(*(&n));
    return (0);
}
int show(int *k)
{
    printf("k %u", *k);

    return (0);
}
int main( )
{
    int i = 3, *x ;
    float j = 1.5, *y ;
    char k = 'c', *z ;
    printf ( "\nValue of i = %d", i ) ;
    printf ( "\nValue of j = %f", j ) ;
    printf ( "\nValue of k = %c", k ) ;
    x = &i ;
    y = &j ;
    z = &k ;
    printf ( "\nOriginal address in x = %u", x ) ;
    printf ( "\nOriginal address in y = %u", y ) ;
    printf ( "\nOriginal address in z = %u", z ) ;
    x-- ;
    y-- ;
    z-- ;
    printf ( "\nNew address in x = %u", x ) ;
    printf ( "\nNew address in y = %u", y ) ;
    printf ( "\nNew address in z = %u ", z ) ;
}*//*
int display(int *j, int n);
int main( )
{
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
    display ( num, 6 ) ;
}
int display ( int *j, int n )
{ int i ;
    for ( i = 0 ; i <= n - 1 ; i++ )
    {
        printf ( "\nelement = %d", *j ) ;
        j++ ;
    }
    return (0);
}
*/
/*
int main( )
{
    int a[ ] = {5,1,2,3,4};
    int *p[] = { a + 3, a + 1, a + 2, a + 3, a + 4 };
    printf ( "\n%u %u %d ",p,*p,*(*p));
}*//*
int main( )
{
int arr[3][4][2] = {
    {
        { 2, 4 },
        { 7, 8 },
        { 3, 4 },
        { 5, 6 }
    },
    {
        { 7, 6 },
        { 3, 4 },
        { 5, 3 },
        { 2, 3 }
    },
    {
        { 8, 9 },
        { 7, 2 },
        { 3, 4 },
        { 5, 1 },
    }
    } ;
    int t;
    t=arr[2][3][1] ;
    printf("%d", t);
    
    printf(" %d ", *( *( *( arr + 2 ) + 3 ) + 1 ) );
}*//*
int f(int *x, int *y);
int main( )
{
    int a[5], i, b = 16 ;
    for ( i = 0 ; i < 5 ; i++ )
        a[i] = 2 * i ;
    f ( a, &b ) ;
    for ( i = 0 ; i < 5 ; i++ )
        printf ( "\n%d", a[i] ) ;
    printf( "\n %d ", b ) ;
}
int f (int *x, int *y)
{
    int i ;
    for ( i = 0 ; i < 5 ; i++ )
    {
    *( x + i ) += 2 ;
    *y += 2 ;
}
    return (0);
}*/ /*
int main( )
{
    int a[5] = { 5, 1, 15, 20, 25 } ;
    int i, j, k = 1, m ;
    i = ++a[1] ;
    j = a[1]++ ;
    m = a[i++] ;
    printf ( "\n%d %d %d", i, j, m ) ;
} */
int main( )
{
    int n[3][3] = {
        2, 4, 3,
        6, 8, 5,
        3, 5, 1
    } ;
    int i, *ptr ;
    ptr = n[3][3] ;
    for ( i = 0 ; i <= 8 ; i++ )
        printf ( "\n%d", *( ptr + i ) ) ;
}
