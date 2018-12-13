//
//  main.c
//  C switch case programs.
//
//  Created by KiwiTech on 13/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>

/*
//program to read weekday number and print weekday name using switch.
int main() {
    int weekDay;
    
    printf("Enter number of day");
    scanf("%d",&weekDay);
    
    switch (weekDay) {
        case 0:
            printf("sunday");
            break;
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        default:
            printf("invaild day");
            break;
    }
    return 0;
}*/
/*
//program to read gender (M/F) and print corresponding gender using switch.
int main() {
    char gender;
    
    printf("enter the gender M/m or F/f\n");
    scanf("%c", &gender);
    
    switch (gender) {
        case 'M':
        case 'm':
            printf("Male");
            break;
        case 'F':
        case 'f':
            printf("Female");
            break;
        default:
            printf("invalid gender");
            break;
    }
}*//*
//C program to check whether a character is VOWEL or CONSONANT using switch.
int main() {
    char vowel;
    
    printf("Enter character\n");
    scanf("%c",&vowel);
    
    switch (vowel) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Character is vowel");
            break;
        default:
            printf("Character is CONSONANT");
            break;
    }
}*/
//C program to design calculator with basic operations using switch.
int main(){
    char ch;
    int n1,n2;
    float res;
    
    printf("enter number 1\n");
    scanf("%d",&n1);
    printf("enter number 2\n");
    scanf("%d",&n2);
    
    printf("Choose operation to perform (+,-,*,/,%):");
    scanf(" %c",&ch);
    
    res=0;
    switch (ch) {
        case '+':
            res=n1+n2;
            break;
        case '-':
            res=n1-n2;
            break;
        case '*':
            res=n1*n2;
            break;
        case '/':
            res=n1/n2;
            break;
        case '%':
            res=n1%n2;
            break;
        default:
            printf("Invalid operation");
            break;
    }
    printf("Result: %d %c %d = %f\n",n1,ch,n2,res);
    return 0;
    
}
