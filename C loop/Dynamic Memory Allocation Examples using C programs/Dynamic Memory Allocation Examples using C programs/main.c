//
//  main.c
//  Dynamic Memory Allocation Examples using C programs
//
//  Created by KiwiTech on 11/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
//Dynamic Memory Allocation
/*int main() {
    int *i;
    float *f;
    char *c;
    
    i= malloc(sizeof(int));
    f= malloc(sizeof(float));
    c= malloc(sizeof(char));
    
    
    printf("Enter Intger\n");
    scanf("%d",i);
    printf("Enter float\n");
    scanf("%f",f);
    printf("Enter Char\n");
    scanf("%c",c);
    
    printf("%d %f %c", *i, *f, *c);
    
    //free memory
    int len1=sizeof(free(i));
    int len2=sizeof(free(f));
    int len3=sizeof(free(c));
    
    printf("%d %d %d", len1,len2,len3);
    return 0;
}*//*
int main(){
    int i=10;
    char *c=NULL;
    
    c=malloc(i*sizeof(int));
    
    
    printf("Enter the text");
    scanf("%[^\n]s", c);
    
    printf("%s",c);
    
    free(c);
}
    */
//read a one dimensional array, print sum of all elements along with inputted array elements using Dynamic Memory Allocation.
int main() {
    int *num=NULL;
    int lim,i;
    int sum=0;
    
    printf("Enter Number of elements\n");
    scanf("%d", &lim);
    
    num= malloc(lim*sizeof(int));
    
    if (num==NULL){
        printf("No spcace in num\n");
    } else {
        
    printf("Enter %d elments\n",lim);
    for (i=0; i<lim; i++) {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    
    for (i=0; i<lim; i++) {
        printf("%d ", num[i]);
    }
    
    printf("\nSum of all elements %d\n", sum);
    
    free(num);
    }
}




