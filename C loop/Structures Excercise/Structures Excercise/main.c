//
//  main.c
//  Structures Excercise
//
//  Created by KiwiTech on 17/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>

//a structure to specify data on students given below: Roll number, Name, Department, Course, Year of joining
struct students
{
    int roolNum;
    char Name[10];
    char department[10];
    char course[10];
    int yearJoin;
} ;

void year(struct students c[0]);
void givenRNum(struct students r[0]);
int main( ) {
    
    struct students clg[5]={1,"Jass","media","mascom",2017,
        2,"jas","it","ios",2018,
        3,"aman","it","web",2018,
        4,"hemant","it","android",2017,
        5,"kapil","it","Testing",2016
    };
    
    year(clg);
    givenRNum(clg);
}

//a function to print names of all students who joined in a particular year
void year(struct students c[0]){
    int i,y;
    
    printf("Enter the year for print of students names who joined in Entered year\n");
    scanf("%d", &y);
    
    for (i=0; i<5; i++) {
        if(c[i].yearJoin==y){
            printf(" %d %s %s %s %d \n", c[i].roolNum,c[i].Name,c[i].department,c[i].course,c[i].yearJoin);
            break;
        }
    }
    if(c[i].yearJoin!=y)
        printf("Entered year not found in records\n");
}

//a function to print the data of a student whose roll number is given.
void givenRNum(struct students r[0]){
    int i,g;
    
    printf("Enter a rool number to print the data of a student whose roll number is Entered \n");
    scanf("%d",&g);
    
    for (i=0; i<5; i++) {
        if(r[i].roolNum==g){
            printf(" %d %s %s %s %d \n", r[i].roolNum,r[i].Name,r[i].department,r[i].course,r[i].yearJoin);
            break;
        }
    }
    if(r[i].roolNum!=g)
        printf("Entered Rool Number not found in records\n");
}
