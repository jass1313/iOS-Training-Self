//
//  main.c
//  Replace EVEN and ODD elements by 0 and 1 using C program
//
//  Created by KiwiTech on 10/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>

//  Replace EVEN and ODD elements by 0 and 1
int oddevan(int);
int main() {
    int arr[]={5,6,3,2,3,5,4,8,6,4};
    int i;
    
    for (i=0;i<10;i++){
    arr[i]=oddevan(arr[i]);
        printf("%d ",arr[i]);
    }
    return 0;
}
int oddevan(int r){
    if (r%2==0){
        return 0;
    } else
        return 1;
}
