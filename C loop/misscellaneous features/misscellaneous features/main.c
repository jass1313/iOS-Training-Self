//
//  main.c
//  misscellaneous features
//
//  Created by KiwiTech on 21/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <string.h>
/*
 // ENUMerated data type
 int main()
{
    enum emp_dept
    {
        assembly, manufecturing, accounts, stores
    };
    struct employee
    {
        char name[30];
        int age;
        float bs;
        enum emp_dept depatment;
    };
     struct employee e;
     
    strcpy(e.name,"Jasbeeer singh");
    e.age=28;
    e.bs= 5895.50;
    e.depatment=manufecturing;
    
    printf("\nName = %s",e.name);
    printf("\nAge =%d",e.age);
    printf("\nBasic salary =%f",e.bs);
    printf("\nDept =%d",e.depatment);
    
    if (e.depatment==accounts)
        printf("\n%s is an accounant",e.name);
    else
        printf("\n%s is not an accountant",e.name);
    
}*//*
//same work of enum with the macros
#define ASSEMBLY 0
#define MANUFACTURING 1
#define ACCCOUNTS 2
#define STORES 3
int main(){
    struct employee {
        char name [30];
        int age;
        float bs;
        int department;
    };
    struct employee e;
    strcpy(e.name,"jasbeer singh");
    e.age=24;
    e.bs=8444.44;
    e.department=MANUFACTURING;
    printf("\n%s",e.name);
    printf("\n%d",e.age);
    printf("\n%f",e.bs);
    printf("\n%d\n",e.department);
}*/
/*
//Renaming Data types with typedef
int main(){
    typedef unsigned long int ULI;
    
    ULI balance=200, salary=100;
    
    printf("%ld,%ld",balance,salary);
    
    struct employee{
        char name[30];
        int age;
        float bs;
    };
    typedef struct employee EMP;
    EMP e1;
    
    typedef struct employee1{
        char name[30];
        int age;
        float bs;
    }EMP1;
    EMP e2;
    
//for pinters
    struct employee3{
        char name[10];
        int age;
        float bs;
    };
    typedef struct employee3 *PEMP;
    
    PEMP P;
    P->age=32;
}
*//*
//typecasting
int main(){
    float a;
    int x=6,y=4;
    //a=x/y;
    //using typecasting for answer in float
    a=(float)x/y;
    printf("\nValue of a = %f",a);
    
    float b=6.45;
    printf("\nvalue of b on type casting= %d",(int)b);
    printf("\nvalue of b = %f",b);
}
*/
/*
//Bit Fields
#define MALE 0;
#define FEMALE 1;
#define SINGLE 0;
#define MARRIED 1;
#define DIVORCED 2;
#define WIDOWED 3;

int main(){
    struct employee
    {
        unsigned gender :1;
        unsigned mar_stat :2;
        unsigned hobby:3;
        unsigned scheme:4;
    };
    struct employee e;
    
    e.gender = MALE;
    e.mar_stat = DIVORCED;
    e.hobby = 5;
    e.scheme = 9;
    printf("\nGender = %d",e.gender);
    printf("\nMarital Status = %d",e.mar_stat);
    printf("\nBytees occupied  by e = %d",sizeof(e));
}
*/
/*
//Poiners to fuctions
void display();
int main(){
    printf("\nAddress of the fuction display is %u", display);
    display();
}
void display(){
    puts("\nLong live viruses!!");
}
*//*
void display();
int main(){
    void(*func_ptr)();
    
    func_ptr=display;
    printf("\n Address of fuction display is %u",func_ptr);
    //call the fuction display first assign to pointer fuction and then call it
    (*func_ptr)();

}
void display(){
    puts("\n Long live viruses!!");
}
*/

/*
//Fuctions Returing Pointers
int *fun();
int main(){
    int *p;
    p=fun();
    printf("%d", *p);
}
int *fun(){
    static int i=20;
    return (&i);
}
*/
char *copy(char*,char*);
int main()
{
    char source[]="Jass";
    char target[10];
    
    //call the function with target and source
    copy(target, source);
    printf("%s\n",target);
}
char *copy(char *t,char *s)
{
    while (*s!='\0') {
        //s assign to t and store the value one by one and then increment to next address....
        *t=*s;
        t++;
        s++;
    }
    //after all string return one by one then in last return the \0
    *t='\0';
    return (t);
}
