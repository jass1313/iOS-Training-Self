//
//  main.c
//  C loop
//
//  Created by KiwiTech on 03/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
/*
int main() {
    
    int i,j,n=5;
    
    for(i=n;i>0;i--){
        for (j=0; j<=n; j++) {
            if(i<=j)
            printf("%d ",j);
            else
            printf("  ");
    }
        printf("\n");
}
    return 0;
}*//*
int main() {
    
    int i,j,n=5;
    
    for(i=n;i>0;i--){
        for (j=n; j>0; j--) {
            if(i<=j)
                printf("%d ",j);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}*/

int main() {
    
    int i,j,n=5,k=1;
    
    for(i=1;i<=n;i++){
        for (j=1; j<=i;j++) {
            printf("%d",j);
        }
        for (j=i*2; j<n*2; j++) {
            printf(" ");
        }
        for(j=i;j>=1;j--) {
                printf("%d",j);
            }
        printf("\n");
    }
    
    return 0;
}
