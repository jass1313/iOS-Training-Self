//
//  main.c
//  C insertion Sort
//
//  Created by KiwiTech on 05/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
// Insertion Sort Implement by self
/*int main() {
    
    int i,j,t,n=8;
    int num[8];
    printf("Enter the number for insertion Sorting\n");
    for (i=0; i<n; i++) {
    scanf("%d",&num[i]);
    }
    
    for (i=1; i<n; i++)
        for (j=0; j<i; j++) {
            if(num[j]>num[i]){
                t=num[j];
                num[j]=num[i];
                num[i]=t;
            }
        }
    for (i=0;i<n; i++) {
        printf("%d ",num[i]);
    }
}*/



// Insertion Sort
int main() {
    
    int i,j,t,n=8;
    int num[8];
    printf("Enter the number for insertion Sorting\n");
    for (i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    
    for (i=1; i<n; i++)
        for (j=i; j>=0; j--) {
            if(num[j]>num[j-1]){
                t=num[j];
                num[j]=num[j-1];
                num[j-1]=t;
            }
        }
    for (i=0;i<n; i++) {
        printf("%d ",num[i]);
    }
}


