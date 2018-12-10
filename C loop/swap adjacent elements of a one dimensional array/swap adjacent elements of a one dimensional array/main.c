//
//  main.c
//  swap adjacent elements of a one dimensional array
//
//  Created by KiwiTech on 10/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>

//swap adjacent elements of a one dimensional array
int main() {
    int num[]={10,20,30,40,50,60,70,80,90,100};
    
    int i,t;
    
    for (i=0; i<10; i++) {
        printf("%d ",num[i]);
    }
    
    printf("\nArray elements after swapping adjacent elements: \n");
for (i=0; i<10;i++,i++) {
        t=num[i];
        num[i]=num[i+1];
        num[i+1]=t;
}
    
    for (i=0; i<10; i++) {
        printf("%d ",num[i]);
    }
    return 0;
}
