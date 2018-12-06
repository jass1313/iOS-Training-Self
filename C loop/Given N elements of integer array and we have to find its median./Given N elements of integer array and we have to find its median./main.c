//
//  main.c
//  Given N elements of integer array and we have to find its median.
//
//  Created by KiwiTech on 06/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>

//Given N elements of integer array and we have to find its median.
int main() {
    int arr[6];
    int i,j,t,n=5;
    float m=0;
    
    printf("Enter the elements\n");
    for (i=0; i<=n; i++) {
        scanf("%d",&arr[i]);
    }
    
    for (i=0; i<=n; i++) {
        for (j=i+1; j<=n; j++) {
            if(arr[i]>arr[j]) {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("Sorted Arrys ");
    for (i=0; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    
    
    if (n%2==0){
        n=n/2;
        m=arr[n];
    }
    else{
        n = (n-1)/2;
        m = arr[n]+0.50;
    }
    printf("\nMedain array %f", m);
}
