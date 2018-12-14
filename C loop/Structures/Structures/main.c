//
//  main.c
//  Structures
//
//  Created by KiwiTech on 14/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
/*
 
 // Diclration of Structures
int main() {
    
    struct book
    {
        char name;
        int pages;
        float price;
    };
    
    struct book b1, b2, b3;
    
    printf("Enter the book name price and pages\n");
    scanf("%c %f %d", &b1.name,&b1.price,&b1.pages);
    scanf("%c %f %d", &b2.name,&b2.price,&b2.pages);
    scanf("%c %f %d", &b3.name,&b3.price,&b3.pages);
    
    printf("\nAnd What u entered");
    printf("\nB1 %c %f %d", b1.name,b1.price,b1.pages);
    printf("\nB2 %c %f %d", b2.name,b2.price,b2.pages);
    printf("\nB3 %c %f %d", b3.name,b3.price,b3.pages);
    return 0;
}
*//*
int main( )
{
    struct book
    {
        char name ;
        float price ;
        int pages ;
    } ;
    struct book b[100] ;
    int i ;
    
     printf ( "Enter name, price and pages \n" ) ;
    for ( i = 0 ; i < 10 ; i++ )
    {
        scanf ( "%c %f %d", &b[i].name, &b[i].price, &b[i].pages ) ;
        printf("i%d\n",i);
    }
    for ( i = 0 ; i < 10 ; i++ )
        printf ( "\n%c %f %d", b[i].name, b[i].price, b[i].pages ) ;
}
// not use full fuction
void linkfloat( )
{
    float a = 0, *b ;
    b = &a ;
    a = *b ;
}*/
/*
 
 //Copy Structure
int main()
{
    struct employee
    {
        char name[10];
        int age;
        float salary;
    };
    struct employee e1={"sajay",50,50005.50};
    struct employee e2,e3;
    
    strcpy(e2.name,e1.name);
    e2.age=e1.age;
    e2.salary=e1.salary;
    
    e3=e2;
    
    printf("\n %s %d %f",e1.name,e1.age,e1.salary);
    printf("\n %s %d %f",e2.name,e2.age,e2.salary);
    printf("\n %s %d %f",e3.name,e3.age,e3.salary);
}*//*

//Nested Structures
int main() {
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };
    struct emp
    {
        char name[25];
        struct address a;
    };
    struct emp e={"jass","523454","delhi",201308};
    
    printf("\nname=%s phone=%s", e.name,e.a.phone);
    printf("\ncity=%s pin=%d",e.a.city,e.a.pin);
}*//*
    
//Fuction to Structures
void display(char *s,char *t,int n);
int main ()
{
    struct book
    {
        char name[25];
        char author [25];
        int callno;
    };
    struct book b1={"Let uc c", "YPK", 101};
    
    display(b1.name,b1.author,b1.callno);
}
void display(char *s,char *t,int n){
    printf("\n%s %s %d", s,t,n );
}
*//*
struct book
{
    char name[25];
    char author[25];
    int callno;
};

void display(struct book b);
int main()
{
    struct book b1={"Let uc c", "YPK", 101};
    display(b1);
}
void display(struct book b)
{
     printf("%s %s %d", b.name,b.author,b.callno);
}*/


//Pointer to Structures
/*
int main()
{
    struct book
    {
        char name[25];
        char author[25];
        int callno;
    };
    struct book b1={"Let uc c", "YPK", 101};
    struct book *ptr;
    ptr=&b1;
    
    printf("%s %s %d", ptr->name,ptr->author,ptr->callno);
}
 *//*
struct book
{
    char name[25];
    char author[25];
    int callno;
};
void display(struct book *b);
int main()
{
    struct book b1={"Let uc c", "YPK", 101};
    display(&b1);
}
void display(struct book *b)
{
    printf("%s %s %d", b->name,b->author,b->callno);
}
*/


// Print the structure verible elements address
//#pragma pack is for memory managment for print the accurate memory space between the varibles according the data types 
#pragma pack(1)
int main()
{
    struct emp
    {
        int a;
        char ch;
        float s;
    };
    #pragma pack( )
    struct emp e;
    printf("%u %u %u", &e.a, &e.ch, &e.s);
}
