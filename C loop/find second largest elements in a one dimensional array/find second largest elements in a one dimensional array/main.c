//
//  main.c
//  find second largest elements in a one dimensional array
//
//  Created by KiwiTech on 06/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//find second largest elements in a one dimensional array
int main() {
    int arr[4];
    int i,s=0,m=0;
    
    printf("Enter array elements\n");
    for (i=0; i<4; i++) {
        scanf("%d",&arr[i]);
    }

    for (i=0; i<4;i++ ) {
        if (arr[i]>m){
            s=m;
            m=arr[i];
        }
        else if(arr[i]>s && arr[i]<m) {
            s=arr[i];
        }
    }
     printf("second largest element %d\nLargest element %d",s,m);
    return 0;
}
