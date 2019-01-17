//
//  main.c
//  decimal to binary and binary to decimal
//
//  Created by KiwiTech on 10/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <math.h>
/*int main()
{
    int n,m;
    
    long long binaryNumber = 0;
    int remainder, i = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    m=n;
    while (m!=0)
    {
        remainder = m%2;
        printf("%d/2, Remainder = %d, Quotient = %d\n", n, remainder, m/2);
        m /= 2;
        binaryNumber += remainder*i;
        i *= 10;
        printf("%lld",binaryNumber);
        
    }
    printf("%d in decimal = %lld in binary", n, binaryNumber);
    return 0;
}
*//*
int main()
{
    int n,m;
    
    long long binaryNumber = 0;
    int remainder, i = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    m=n;
    while (m!=0)
    {
        remainder = m%2;
        m /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    printf("%d in decimal = %lld in binary", n, binaryNumber);
    return 0;
}*/
/*

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    int decimalNumber = 0, i = 0, remainder;
    
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        i++;
    }
     printf("%lld in binary = %d in decimal", n, decimalNumber);
    return 0;
}*//*

int main(){
    long long binary = 0;
    int i=1,remainder,n=13;
    
    while (n!=0) {
        remainder=n%2;
        n/=2;
        binary+=remainder*i;
        i*=10;
    }
    printf("%lld",binary);
}*/
/*
int main(){
    long long n = 1101;
    int i=0,remainder,decimal = 0;
    
    while (n!=0) {
        remainder=n%10;
        n/=10;
        decimal+=remainder*pow(2,i);
        i++;
         printf("%d ",remainder);
    }
    printf("\n%d",decimal);
}
*/

void decimal(long long n);
int main(){
    long long binary = 0;
    int remainder,n=130,i=1;
    printf("%d\n",n);
    while (n!=0) {
        remainder=n%2;
        n/=2;
        binary=binary+remainder*i;
        i=i*10;
    }
    printf("%lld\n",binary);
    decimal(binary);
}
void decimal(long long n){
    long long decimal = 0;
    int remainder,i=0;

    while (n!=0) {
        remainder=n%10;
        n/=10;
        decimal+=remainder*pow(2, i);
        i++;
    }
    printf("%lld\n",decimal);
}
