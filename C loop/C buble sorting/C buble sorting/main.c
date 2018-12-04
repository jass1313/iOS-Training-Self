//
//  main.c
//  C buble sorting
//
//  Created by KiwiTech on 04/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>

int main(){
    int i,j,t,n=5;
    int num[5];
    printf("Enter the numbers");
    for (i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    for (i=0; i<n; i++) {
            for(j=0;j<n;j++){
                if(num[j]>num[j+1]){
                    t=num[j+1];
                    num[j+1]=num[j];
                    num[j]=t;
        }
      }
    }
    for (i=0; i<n; i++) {
     printf("%d",num[i]);
    }
}
