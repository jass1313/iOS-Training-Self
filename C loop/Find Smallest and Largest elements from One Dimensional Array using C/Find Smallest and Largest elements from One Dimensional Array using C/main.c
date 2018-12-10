//
//  main.c
//  Find Smallest and Largest elements from One Dimensional Array using C
//
//  Created by KiwiTech on 10/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//#include<stdlib.h>
#include<limits.h>
//Find Smallest and Largest elements from One Dimensional Array using C
int main() {
    int num[]={10,10,120,-42};
    
    //this value asign logic see from google
    int i,m=num[0],s=INT_MAX;
    
    
    for (i=0; i<4; i++) {
        if (num[i]>m) {
            s=m;
            m=num[i];
        } else if (num[i]<s && num[i]<m){
            s=num[i];
        }
    }
    printf("S %d M %d\n",s,m);
    return 0;
}
