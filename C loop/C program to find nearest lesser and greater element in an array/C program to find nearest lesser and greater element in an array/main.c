//
//  main.c
//  C program to find nearest lesser and greater element in an array
//
//  Created by KiwiTech on 06/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//C program to find nearest lesser and greater element in an array
int main() {
    int array[]={20,3,4,6,8,9,0};
    int i,s=7,n;
    
    printf("Enter any number for find small and large element in array");
    scanf("%d",&n);
    
    for (i=0; i<s; i++) {
        if(n>array[i]){
            printf(" S%d", array[i]);
        } if(n<array[i]) {
            printf(" L%d", array[i]);
        }
    }
    return 0;
}
