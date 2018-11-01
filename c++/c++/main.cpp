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
 */

