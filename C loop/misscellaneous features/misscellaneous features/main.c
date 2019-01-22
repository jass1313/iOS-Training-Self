//
//  main.c
//  misscellaneous features
//
//  Created by KiwiTech on 21/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
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
    EMP1 e2;
    
//for ponters
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
*//*
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
}*/
/*
//Function with varible number of arguments
#include <stdarg.h>
int findmax(int,...);
int main(){
    int max;
    
    max=findmax(5,6,500,10,50,100);
    printf("\nmaximum = %d",max);
    
    max=findmax(3,100,300,800);
    printf("\nmaximum =%d",max);
}

int findmax(int tot_num, ...){
   
    int max,count,num;
    
    //ptr declare type of va_list
    va_list ptr;
    
    //va_start for ptr point to first argument
    va_start(ptr, tot_num);
    
    //va_arg for assign the first arg to the max
    max=va_arg(ptr, int);
    
    for (count=1; count<tot_num; count++) {
        num=va_arg(ptr, int);
        if(num>max)
            max=num;
    }
    return max;
}
*//*
#include <stdarg.h>
void display(int,int,...);
int main(){
    display(1,2,5,6);
    display(2,4,'A','a','b','c');
    display(3,3,2.5,4.3,5.4);
}
void display(int type, int num,...)
{
    int i,j;
    char c;
    float f;
    va_list ptr;
    
    va_start(ptr, num);
    printf("\n");
    switch (type) {
        case 1:
            for (j=1; j<=num; j++) {
                i=va_arg(ptr, int);
                printf("%d",i);
            }
            break;
        case 2:
            for (j=1; j<=num; j++) {
                c=va_arg(ptr, char);
                printf("%c",c);
            }
            break;
        case 3:
            for (j=1; j<=num; j++) {
                f=(float)va_arg(ptr, double);
                printf("%1.1f ",f);
            }
    }
}
*//*
//unions
int main(){
    union a {
        int i;
        char ch[2];
    };
    union a key;
    
    key.i=512;
    
    printf("\nkey.i = %d", key.i);
    printf("\nkey.ch[0] = %d",key.ch[0]);
    printf("\nkey.ch[1] = %d",key.ch[1]);
}
*//*
int main(){
    union a {
        int i;
        char ch[2];
    };
    union a key;
    key.i=512;
    printf("\nkey.i = %d",key.i);
    printf("\nkey.ch[0]= %d",key.ch[0]);
    printf("\nkey.ch[1]= %d",key.ch[1]);
    
    key.ch[0]=50;
    printf("\nkey.i = %d",key.i);
    printf("\nkey.ch[0]= %d",key.ch[0]);
    printf("\nkey.ch[1]= %d",key.ch[1]);
}
*/
//Utility of Unions
/*
struct employee
{
    char n[20];
    char grade[4];
    int age;
    char hobby[10];
    int crcardno;
    char vehno[10];
    int dist;
};
struct employee e;
*/
/*
struct info1
{
    char hobby[10];
   long int crcardno;
};
struct info2
{
    char vehno[10];
    int dist;
};
union info
{
    struct info1 a;
    struct info2 b;
};
struct emp
{
    char n[20];
    char grade[4];
    int age;
    union info f;
};
struct emp e;

int main() {
    strcpy(e.n,"jasbeer");
    strcpy(e.grade,"A1");
    e.age=35;
    strcpy(e.f.a.hobby,"singing");
    e.f.a.crcardno=5246003100130123;
    
    printf("%ld\n",e.f.a.crcardno);
    printf("%s\n",e.grade);
}
*//*
//Exercise
//[A] (a)
int main(){
    enum status {pass,fail,atkt};
    enum status stud1,stud2,stud3;
    stud1=pass;
    stud2=fail;
    stud3=atkt;
    printf("\n%d %d %d",stud1,stud2,stud3);
}
*//*
//(b)
int main(){
    printf("%f",(float)((int)3.5/2));
}
*//*
//(c)
int main(){
    float i,j;
    i=(float)3/2;
    j=i*3;
    printf("\n%d",(int)j);
}
*//*
//[B] (a)
int main(){
    typedef struct patient{
        char name[20];
        int age;
        int systolic_bp;
        int diastolic_bp;
    }ptt;
    
    ptt p1={"anil",23,110,220};
    printf("\n%s %d",p1.name,p1.age);
    printf("\n%d %d",p1.systolic_bp,p1.diastolic_bp);
}
*//*
//(b)
void show();
int main(){
    void(*s)();
    s=show;
    (*s)();
}
void show(){
    printf("\ndon't show off. it wont pay in the long run");
}
*//*
//(d)
void show(int,float);
int main(){
    void(*s)(int,float);
    s=show;
    (*s)(10,3.14);
}
void show(int i,float f)
{
    printf("\n %d %f",i,f);
    
}*//*
float one(int, int);
float two(int, int);
float three(int, int);
float four(int, int);

int main()
{
    float(*ptr[4])(int, int);
    float a, b, c, d;
    ptr[0] = one;
    ptr[1] = two;
    ptr[2] = three;
    ptr[3] = four;
    a = ptr[0](1, 2);
    b = ptr[1](2, 4);
    c = ptr[2](6, 3);
    d = ptr[3](22, 7);
    printf("a : %f\tb : %f\n", a, b);
    printf("c : %f\td : %f\n", c, d);
    return 0;
}
float one(int a, int b)
{
    float r;
    r = (float)a / b;
    
    return r;
}
float two(int x, int y)
{
    float ans;
    ans = (float)x / y;
    return ans;
}
float three(int i, int j)
{
    float a;
    a = (float)i / j;
    return a;
}
float four(int m, int n)
{
    return ((float)m / n);
}
*//*
float one(int, int);
float two(int, int);
float three(int, int);
float four(int, int);
int main(){
    float(*ptr[4])(int, int);
    float a,b,c,d;
    
    ptr[0]=one;
    ptr[1]=two;
    ptr[2]=three;
    ptr[3]=four;
    
    a=one(1,2);
    b=two(3,4);
    c=three(6,7);
    d=four(22,4);
    printf("a: %f b: %f c: %f d: %f\n",a,b,c,d);
}
float one(int a, int b){
    return ((float)a/b);
}
float two(int b, int c){
    return ((float)b/c);
}
float three(int d, int f){
    return ((float)d/f);
}
float four(int e,int g){
    return ((float)e/g);
}
*//*
#include<stdarg.h>
void type(int, ...);
int main(){
    type(5, 4, 6, 3, 6, 7);
    return 0;
}
void type(int point, ...) {
    if (point < 1){
        printf("Nothing can be draw.");
        return;
    }
    switch (point){
        case 1:
            printf("A point can be drawn.\n");
            break;
        case 2:
            printf("A line can be drawn.\n");
            break;
        case 3:
            printf("A triangle can be drawn.\n");
            break;
        case 4:
            printf("A rectangle can be drwan.\n");
            break;
        case 5:
            printf("A pentagon can be drawn.\n");
            break;
        case 6:
            printf("A hexagon can be drawn.\n");
            break;
        default:
            printf("A polygon can be drawn.\n");
    }
}*/
//(c) //using bit fields
struct date
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y:12;
};
int main(){
    struct date dt[3] ={31,12,2014,
                        10,10,2009,
                        16,11,2010
    };
    struct date temp;
    int i,j;
    
    for (i=0; i<3; i++) {
        for (j=i+1; j<3; j++) {
            if(dt[i].y>dt[j].y){
                temp=dt[j];
                dt[j]=dt[i];
                dt[i]=temp;
            }
        }
    }
    for (i=0; i<3; i++) {
        printf("Emp no. %d ",i+1);
        printf("DoJ %d/%d/%d \n",dt[i].d,dt[i].m,dt[i].y);
    }
}

