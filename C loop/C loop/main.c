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
}*//*

int main() {
    
    int i,j,n=5;
    
    for(i=1;i<=n;i++){
        for (j=1; j<=i;j++) {
            printf("%d",j);
        }
        for (j=i*2; j<n*2; j++) {
            printf(" ");
        }
        for(j=i;j>0;j--) {
                printf("%d",j);
            }
        printf("\n");
    }
    
    return 0;
}*/
/*
int main() {
    
    int i,j,n=5;
    
    for(i=n;i>=1;i--){
        for (j=n; j>=i;j--) {
            printf("%d",j);
        }
        for (j=i*2; j>2; j--) {
            printf(" ");
        }
        for(j=i;j<=n;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}*//*

int main()
{
    int j,i,l;
    printf("Enter Number and Division\n");
    scanf("%d%d",&j,&i);
    
    for (l=0;j>=i;l++ ) {
        j=j-i;
    }
    printf("remainder %d\n",j);
    printf("division %d\n" ,l);
}*/

/*
 
//Selection Sort Implement by self
int main()
{
    int i,j,t,n=5;
    int num[5];
    
    printf("Enter Number for sorting\n");
    for (i=0; i<n; i++) {
    scanf("%d",&num[i]);
    }
    
    for (i=0; i<n; i++)
        for(j=i+1;j<n;j++){
            if(num[i]>num[j]){
                t=num[i];
                num[i]=num[j];
                num[j]=t;
        }
    }
        for (i=0; i<n; i++)
            printf("%d ",num[i]);
    
}

*/







