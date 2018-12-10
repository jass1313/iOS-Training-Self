//
//  main.c
//  find second smallest element in a one dimensional array
//
//  Created by KiwiTech on 07/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//#include<stdlib.h>
#include<limits.h>
//find second smallest element in a one dimensional array
int main() {
    int num[]={90,-10,12,42};
    
    //this value asign logic see from google
    int i,s=num[0],ss=INT_MAX;
    
    
    for (i=0; i<4; i++) {
        if (num[i]<s) {
            ss=s;
            s=num[i];
        } else if (num[i]<ss && num[i]>s){
                ss=num[i];
        }
        printf("SS %d S %d\n",ss,s);

    }
        return 0;
}

