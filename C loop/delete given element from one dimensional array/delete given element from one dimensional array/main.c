//
//  main.c
//  delete given element from one dimensional array
//
//  Created by KiwiTech on 10/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
//delete given element from one dimensional array
int main() {
    int num[5];
    int i,j,len,count=0,n;
    
    len=sizeof(num)/sizeof(num[0]);
    
   printf("Enter elements in array\n");
    for (i=0; i<len; i++) {
        scanf("%d",&num[i]);
    }
    
    printf("Enter element which you want to delete form array\n");
    scanf("%d",&n);
    
    for (i=0; i<len; i++){
        if(num[i]==n){
            count++;
            for (j=i; j<len; j++) {
                    num[j]=num[j+1];
                }
                i--;
            }
        }
    
    if(count)
        printf("%d found %d times and deleted successfully.",n,count);
    else
        printf("%d not found.",n);
    
    
    for (i=0; i<len-count; i++) {
        printf("%d ",num[i]);
    }
    
    
    return 0;
}
