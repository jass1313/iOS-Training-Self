//
//  main.c
//  find occurrence of an element in one dimensional array
//
//  Created by KiwiTech on 10/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//find occurrence of an element in one dimensional array
int main() {
    int num[]={20,10,20,30,10};
    int i,j=0,n=20;
    
    for (i=0; i<5; i++) {
        if (num[i]==n) {
            j=j+num[i];
        }
    }
     printf("Occurrence of %d is: %d ",n,j);
    return 0;
}
