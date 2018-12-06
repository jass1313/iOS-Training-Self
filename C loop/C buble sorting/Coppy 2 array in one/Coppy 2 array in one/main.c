//
//  main.c
//  Coppy 2 array in one
//
//  Created by KiwiTech on 06/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//
#include <stdio.h>


//Given two dimensional array and we have to merge them in a single array.
int main() {
    int arr1[6], arr2[5], arr3[11];
    int i,j,n=6,num=5;
    
    printf("Enter the numbers for arr1\n");
    for (i=0; i<n; i++) {
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter the numbers for arr2\n");
    for (i=0; i<num; i++) {
        scanf("%d",&arr2[i]);
    }
    
    for (i=0,j=0; i<n+num; i++) {
        if(i<n) {
        arr3[i]=arr1[i];
        }
        if(i>num) {
            arr3[i]=arr2[j];
            j++;
        }
    }
    
    printf("Entered Arrays in both arrys\n");
    for (i=0; i<n+num; i++) {
    printf("%d ",arr3[i]);
    }
    return 0;
}
