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
}*/
int main(){
    int i=10;
    char *c;
    
    c=malloc(i*sizeof(int));
    
    printf("Enter the text");
    scanf("%[^\n]s", c);
    
    printf("%s",c);
    
    free(c);
    
    
}


