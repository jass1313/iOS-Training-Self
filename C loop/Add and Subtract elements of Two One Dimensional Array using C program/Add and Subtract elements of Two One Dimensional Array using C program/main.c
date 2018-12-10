//
//  main.c
//  Add and Subtract elements of Two One Dimensional Array using C program
//
//  Created by KiwiTech on 10/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//Add and Subtract elements of Two One Dimensional Array
int add(int,int);
int subtract(int, int);
int main()
{
    int num[]={4,5,2,6,3,1,5,32,2,20},num3[10];
    int num1[]={5,6,4,3,256,67,78,9,2,1};
    int i;
    
    printf("Array elements after adding : ");
    for (i=0; i<10; i++) {
       num3[i]=add(num[i],num1[i]);
        printf("%d ",num3[i]);
    }
    
    printf("\nArray elements after subtracting : ");
    for (i=0; i<10; i++) {
        num1[i]=subtract(num[i],num1[i]);
        printf("%d ",num1[i]);
    }
    
    return 0;
}

int add(int r, int a){
    r=r+a;
    return r;
}
int subtract(l,s){
    l=l-s;
    return l;
}

