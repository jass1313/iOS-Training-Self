//
//  main.c
//  delete given element from one dimensional array
//
//  Created by KiwiTech on 10/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//delete given element from one dimensional array
int main() {
    int num[]={10,60,20,30,10};
    int i,nu=10,len;
    
    len=sizeof(num)/sizeof(num[0]);

    for (i=0; i<len; i++)
        if (num[i]==nu){
        for (i=0; i<len; i++) {
            num[i]=num[i+1];
            len--;
        }
    }
        for (i=0; i<=len; i++) {
            printf("%d ",num[i]);
        }
    return 0;
}
