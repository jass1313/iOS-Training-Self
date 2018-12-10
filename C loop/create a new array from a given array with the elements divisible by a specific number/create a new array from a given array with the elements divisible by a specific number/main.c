//
//  main.c
//  create a new array from a given array with the elements divisible by a specific number
//
//  Created by KiwiTech on 07/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//create a new array from a given array with the elements divisible by a specific number
int main() {
    int num[]={40,20,30,25,60,65,35}, num2[7];
    int i,j=0,len,d=15;
    
    len=sizeof(num)/sizeof(num[0]);
    
    for (i=0; i<7; i++){
        if(num[i]%d==0){
            num2[j]=num[i];
            j++;
        } else
            len--;
    }
    
    if (len==0){
        printf("No element divisible by a specific number in given array\n ");
    } else {
        printf("Element divisible by a specific number\n");
    for (i=0; i<len; i++) {
        printf("%d ",num2[i]);
        }
    }
    return 0;
}
