//
//  main.c
//  create, initialize, assign and access a pointer variable
//
//  Created by KiwiTech on 13/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
/*
//Program to create, initialize, assign and access a pointer variable.
 int main() {
    int num=10;
    int *p;
    
    p= &num;
    
    printf("%d %d %u",num,*p,p);
    
    return 0;
}*/

/*
 //Program to print a string using pointer.
int main(){
    char a[]= "jasbeer";
    char *p;
    
    p=a;
    
    while (*p!='\0') {
        printf("%c",*p);
        p++;
    }
    */
/*
//Program to count vowels and consonants in a string using pointer.
    int main(){
        char str[10];
        char *p;
        int v=0,c=0;
        
        gets(str);
        
        p=str;
    
        while (*p!='\0') {
            if(*p=='A'||*p=='a'||*p=='E'||*p=='e'||*p=='I'||*p=='i'||*p=='O'||*p=='o'||*p=='U'||*p=='u'){
                v++;
            }else{
                c++;
            }
            p++;
            
        }
    printf("%d %d", v,c);
    
}*//*
// read array elements and print the value with the addresses using pointer.
int main()
{
    int arr[10];
    int *pa;
    int i;
    
    pa=&arr[0];
    
    printf("Enter array elements\n");
    for (i=0; i<10; i++) {
        scanf("%d",pa+i);
    }
    for (i=0; i<10; i++) {
        printf("%X %u %d\n",(pa+i), (pa+i), *(pa+i));
    }
} *//*

//C program for double pointer (pointer to pointer)
int main(){
    int a=100;
    int *p;
    int **pp;
    
    p=&a;
    pp=&p;
    
    printf("%d %d", *p, **pp);
}*/

//demonstrate example of array of pointers

int main(){
    int a=100,b=200,c=300;
    
    int *p[3];
    
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    
    printf("%d %d %d ", *p[0],*p[1],*p[2]);
    
    *p[0]+=10;
    *p[1]+=10;
    *p[2]+=10;
    
    printf("\n%d %d %d", *p[0],*p[1],*p[2]);
    
}
