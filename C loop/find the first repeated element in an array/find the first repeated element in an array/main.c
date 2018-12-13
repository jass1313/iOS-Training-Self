//
//  main.c
//  find the first repeated element in an array
//
//  Created by KiwiTech on 11/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//find the first repeated element in an array
int main() {
    int num[5]={10,20,10,20,50};
    int i,j,k=0,count=0;
    
    for (i=0; i<5; i++) {
        printf("%d ",num[i]);
    }
    
    for (i=0; i<5; i++) {
        for (j=i+1; j<5; j++) {
            if(num[i]==num[j]){
                count=j;
                k=num[i];
            }
        }
         printf("\n%d repeated at %d index ", k, count);
    }
   
    
    return 0;
}
