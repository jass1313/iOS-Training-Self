//
//  main.c
//  Delete Prime numbers from a array
//
//  Created by KiwiTech on 07/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//Delete Prime numbers from an array
int main() {
    int num[5];
    int i;
    int len = sizeof(num)/sizeof(num[0]);
    
    printf("Enter elements in array\n");
    for (i=0; i<len; i++) {
        scanf("%d",&num[i]);
    }
    
    printf("prime Numbers\n");
    for (i=0; i<=len; i++) {
        if(num[i]%2!=0){
            printf("%d ",num[i]);
            num[i]=num[i+1];
            len--;
            i--;
        }
    }
    printf("\nNon Prime numbers");
    for (i=0; i<len; i++) {
        printf(" \n%d ", num[i]);
    }
    
    return 0;
}
