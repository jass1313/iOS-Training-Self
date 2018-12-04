//
//  main.c
//  C_Proj
//
//  Created by KiwiTech on 01/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>

/*int main() {
   
    int i,j;
    
    for(j=5;j>0;j--){
        for (i=j; i>0; i--){
        printf("%d ",i);
        }
       printf("\n");
    }
    return 0;
}*/

int main() {
    
    int i,j,n=5;
    
    for(j=n;j!=0;j--){
        for (i=j; i<=n; i++) {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

