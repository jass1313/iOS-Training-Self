//
//  main.cpp
//  C++
//
//  Created by KiwiTech on 26/10/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//
#include <stdio.h>
#include <string.h>
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
              } *//*
                   int main( )
                   {
                   int n[3][3] = {
                   2, 4, 3,
                   6, 8, 5,
                   3, 5, 1
                   } ;
                   int i=0;
                   int (*ptr)[3]=&n[i];
                   
                   for ( i = 0 ; i <= 8 ; i++ )
                   printf ( "%d\n", *( *ptr + i ) ) ;
                   }*//*
                       int main( )
                       {
                       int three[5][5] = {
                       2,4,2,3,6,
                       6,8,2,3,6,
                       2,3,1,9,5,
                       5,3,2,7,99,
                       69,3,3,32,96
                       } ;
                       int i,j,k=0;
                       for (i=0; i<5; i++) {
                       // printf("\n");
                       for (j=0; j<5; j++) {
                       if (three[i][j]>k)
                       k=three[i][j];
                       
                       }
                       
                       }
                       printf("%d", k);
                       
                       }*//*
                           int main()
                           {
                           int a[10][10], r, c, i, j;
                           printf("Enter rows and columns of matrix: ");
                           scanf("%d %d", &r, &c);
                           
                           printf("\nEnter elements of matrix:\n");
                           for(i=0; i<r; ++i)
                           for(j=0; j<c; ++j)
                           {
                           printf("Enter element a %d %d: ",i, j);
                           scanf("%d", &a[i][j]);
                           }
                           printf("\nEntered Matrix: \n");
                           for(i=0; i<r; ++i)
                           for(j=0; j<c; ++j)
                           {
                           printf("%d  ", a[i][j]);
                           if (j == c-1)
                           printf("\n\n");
                           }
                           printf("\nTranspose of Matrix:\n");
                           for(i=0; i<c; ++i)
                           for(j=0; j<r; ++j)
                           {
                           printf("%d  ",a[j][i]);
                           if(j==r-1)
                           printf("\n\n");
                           }
                           return 0;
                           }*//*
                               
                               int main()
                               {
                               int add[6][6] {
                               5,3,3,2,5,3,
                               4,6,3,5,3,6,
                               7,7,6,9,8,2,
                               2,9,5,4,6,4,
                               8,9,6,4,5,7,
                               1,5,3,6,8,5
                               };
                               int adds[6][6] {
                               5,9,8,7,4,5,
                               9,7,6,8,5,3,
                               2,5,6,7,9,5,
                               4,2,3,5,4,6,
                               3,5,4,8,9,6,
                               8,6,5,4,8,2
                               };
                               
                               for(int i=0;i<6;i++)
                               for(int j=0;j<6;j++)
                               {
                               int k=add[i][j]+adds[i][j];
                               printf(" %d", k);
                               if(j==6-1)
                               printf("\n");
                               }
                               }*//*
int main()
{
    static int array1[10][10], array2[10][10];
    int i, j, k, a, m, n;
    
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter co-efficients of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array1[i][j]);
        }
        printf("\n");
    }
    printf("After arranging rows in ascending order\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            for (k =(j + 1); k < n; ++k)
            {
                printf(" %d", k);
                if (array1[i][j] > array1[i][k])
                {
                    a = array1[i][j];
                    array1[i][j] = array1[i][k];
                    array1[i][k] = a;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array1[i][j]);
        }
        printf("\n");
    }
    printf("After arranging the columns in descending order \n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            for (k = i + 1; k < m; ++k)
            {
                if (array2[i][j] < array2[k][j])
                {
                    a = array2[i][j];
                    array2[i][j] = array2[k][j];
                    array2[k][j] = a;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array2[i][j]);
        }
        printf("\n");
    }
}*//*
int main()
{
    
    char name[25] ;
    printf ( "Enter your full name " ) ;
    gets ( name ) ;
    puts ( "Hello!" ) ;
    printf("%s",name) ;
    
    char name[25];
    printf("enter ur name");
    scanf("%[^\n]s", name);
    
    printf("%s\n",name);
    
    char name2[]= "HAESLER";
    char *ptr;
    ptr=name2;
    while (*ptr!='\0') {
        printf("%c",*ptr);
        ptr++;
    }*//*
    
    char name2[]= "HAESLER";
    char name[10];
    
    char *s = "Good Morning";
    char *q;
    
    //name = name2;
    q=s;
    printf("%s ",q);*/

/*
int xstrlen ( char *s );
int main()
{
    char arr[ ] = "Bamboozled" ;
    int len1, len2 ;
    len1 = xstrlen ( arr ) ;
    len2 = xstrlen ( "Humpty Dumpty" ) ;
    printf ( "\nstring = %s length = %d", arr, len1 ) ;
    printf ( "\nstring = %s length = %d", "Humpty Dumpty", len2 ) ;
}
int xstrlen ( char *s )
{
    int length = 0 ;
    while ( *s != '\0' )
    {
        length++ ;
        s++ ;
        printf("%d ",length);
    }
    return ( length ) ;
}*//*

int xstrcat ( char *t,   char *s );
int main( )
{
    char source[ ] = "Sayonara" ;
    char target[30] = "hello " ;
    xstrcat ( target, source ) ;
    printf ( "\nsource string = %s", source ) ;
    printf ( "\ntarget string = %s \n", target ) ;
}
int xstrcat (  char *t,   char *s )
{
    while ( *s != '\0' )
         / {
                *t++;
            }
    while (*s != '\0')
            {
                *t++=*s++;
            } /
    {
        if (*t != '\0')
        {
            *t++=*t;
        } else
        {
            *t++=*s++;
        }
    }
     return ('\0');
}*//*
int main( )
{
    char string1[ ] = "Jerry" ;
    char string2[ ] = "Ferry" ;
    int i, j, k ;
    i = strcmp ( string1, "Jerry" ) ;
    j = strcmp ( string1, string2 ) ;
    k = strcmp ( string1, "Jerry boy" ) ;
    printf ( "\n%d %d %d", i, j, k ) ;
} *//*

//#define FOUND 1
//#define NOTFOUND 0
int main() {
    char masterlist[6][10] ={
                        "akash",
                        "jasbeer",
                        "jass",
                        "james",
                        "neha",
                        "god"
                            };
    int i,flag,a;
    
    char yourname[10];
    printf("enter your name");
    scanf("%s",yourname);
   // flag = NOTFOUND;
    for(i=0;i<=5;i++)
    {
         a = strcmp ( &masterlist[i][0] , yourname ) ;
        printf("%s", masterlist);
        if (a==0)
        {
            printf("Welcome you can enter");
           // flag=FOUND;
            break;
        }
    }
    if(a != 0)
        printf("Sorry you are a trespasser %d",a);
}*/
/*
#include "alloc.h"
int main( )
{
    char *names[6];
    char n[50];
    int len,i;
    char *p;
    for ( i = 0 ; i < 6 ; i++ )
    {
        printf ( "\nEnter name " ) ;
        scanf ( "%s", n ) ;
        len = strlen(n);
        p = malloc(len+1);
        strcpy(p, n );
        names[i]=p;
    }
    for (i=0; i<6;i++)
        printf("\n%s",names[i]);
}*//*
int main( )
{
    char str[20] , news[20];
    char *s, *t;
    int pos,n,i;
    
    printf ( "\n enter the string:") ;
    scanf("%s",str);
    
    printf("\n enter the position and number of characters to exract:");
    scanf("%d %d",&pos,&n);
    
    s=str;
    t=news;
    
    if(n==0)
        n = strlen(str);
    
    s=s+pos-1;
    
    for (i=0; i<n; i++) {
        *t=*s;
        s++;
        t++;
        
    }
    *t='\0';
    printf("\n The substring is %s\n", news);
    
}*//*
int main()
{
    char str[6];
    int num=0,i;
    
    printf("Enter a string containing a number:");
    scanf("%s",str);
    
    for (i=0; str[i] != '\0'; i++) {
        if(str[i]>=48&&str[i]<=57)
        
            num=num*10+(str[i]-48);
    
        else
        {
            printf("Not a valid string\n");
            return 1;
        }
    }
    printf("\n The number is:%d\n",num);
    return 0;
}*//*
int main( )
{
    int i,a,x;
    char *str[ ] = {
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    } ;
    char str1[30],str2[30];
    printf("Enter str1 :");
    scanf("\n%[^\n]s",str1);
    printf("Enter str2 :");
    scanf("\n%[^\n]s",str2);
    for(i=0;i<6;i++)
    {
        a=strcmp(str[i],str1);
        printf("%d",a);
        if(a==0)
        {
            str[i]=str2;
        }
    }
    for(x=0;x<6;x++)
        printf("\n%s",str[x]);
}*//*

int main(){
    int i,j,count;
    char str[25][25],temp[25];
    puts("How many strings u are going to enter?: ");
    scanf("%d",&count);
    
    puts("Enter Strings one by one: ");
    for(i=0;i<=count;i++)
        gets(str[i]);
    for(i=0;i<=count;i++)
        for(j=i+1;j<=count;j++){
            if(int a=strcmp(str[i],str[j])>0){
                printf("%d \n", a);
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    printf("Order of Sorted Strings:");
    for(i=0;i<=count;i++)
        puts(str[i]);
    
    return 0;
}*//*
#define m 5
int main()
{
    int i,j,k,t;
    int arr[m];
    printf("Enter 5 numbers\n");
    for(i=0;i<m;i++)
        scanf("%d",&arr[i]);
    for(j=0;j<m;j++)
    {
        for(k=j+1;k<m;k++)
        {
            if(arr[j]>arr[k])
            {
                t=arr[k];
                arr[k]=arr[j];
                arr[j]=t;
                printf("%d",t);
            }
        }
        
    }
    for(i=0;i<m;i+=1)
        printf("%d ",arr[i]);
    return 0;
}*//*
int main()
{
    int i,j,m=0;
    int array[3][4];
    
        printf("Enter the Numbers\n");
    for (i=0; i<3; i++)
        for ( j=0; j<4; j++){
            scanf("%d", &array[i][j]);
        }
    for (i=0; i<3; i++)
        for (j=0; j<4; j++) {
            m=m+array[i][j];
      }
    printf("Total %d",m);
}*//*

int main()
{
    int array[2][2][2]={
                        {
                          {3,2},
                          {5,6}
                        },
                        {
                            {6,7},
                            {8,9},
                        }
                    };
    int i,j,k,s=0;
    for (i=0;i<2;i++)
        for (j=0; j<2; j++) {
            for (k=0; k<2; k++) {
                s=s+array[i][j][k];
               
            }
            
        }
    printf("%d ",s);
}*//*

int main() {
    int arr[10];
    int i,j,k=0,l=0,m=0,n=0;
    printf("Enters the numbers");
    for (i=0; i<10; i++) {
    scanf("%d",&arr[i]);
    }
    for(j=0;j<10;j++){
        if (arr[j]>0) {
            m=m+1;
            } else {
                n=n+1;
            }
            if (arr[j]%2==0) {
                k=k+1;
            } else {
                l=l+1;
            }
        
        }
    printf("Postive Numbers %d Nagtive Numbers %d even Numbers %d Odd Numbers %d", m,n,k,l );  }*/
  /*
int main() {
    int arr[10];
    int i,j,n,m=0;
    printf("Enters the numbers \n");
    for (i=0; i<10; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter any number for search in array \n");
    scanf("%d",&n);
    
    for(j=0;j<10;j++){
        if(arr[j]==n){
            m=m+1;
        }
    }
    printf("Searched Number %d is Present %d Times in the array", n, m);
}*//*

 int main() {
     int arr[2];
     int i,j,w;
     
    printf("Enters the numbers \n");
    for (i=0; i<2; i++) {
        scanf("%d",&arr[i]);
    }
     
     for (w=0; w<2; w++) {
         j=arr[w];
     int t=0,m;
        while (j>0) {
            m=j%10;
            t=t*10+m;
            j=j/10;
        }
         printf("%d \n", t);
     }
    return (0);
}*//*
     
int main()
{
    char arr[]="RAM";
    int i;
    for (i=2; i>=0; i--) {
        printf("%c",arr[i]);
    }
}*//*
int main()
{
    char arr[4],arr1[4];
    printf("enter the name");
       scanf("%s",arr);
    int i,j;
    for (i=0,j=2;i<=3;i++,j--) {
        arr1[i]=arr[j];
        }
    for (i=0; i<3; i++) {
        arr[i]=arr1[i];
        printf("%c",arr[i]);
    }
}*/

int main()
{
    char arr[25];
    printf("enter the name");
    scanf("%s",arr);
    int i,j,t;
  for (i=0,j=5;i<=5/2;i++,j--) {
        t=arr[j];
        arr[j]=arr[i];
        arr[i]=t;
        }
     printf("%s",arr);
}

