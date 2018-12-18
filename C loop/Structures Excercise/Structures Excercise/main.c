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
int found;
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
    found=0;
    
    printf("Enter the year for print of students names who joined in Entered year : ");
    scanf("%d", &y);
    
    printf("\nStudents list who join in %d\n\n",y);
    for (i=0; i<5; i++) {
        if(c[i].yearJoin==y){
            found=1;
            printf("RoolNumber: %d\n", c[i].roolNum);
            printf("Name: %s\n", c[i].Name);
            printf("Department: %s\n", c[i].department);
            printf("Course: %s\n", c[i].course);
            printf("Year of Join: %d\n", c[i].yearJoin);
            printf("\n");
        }
    }
    if(found==0)
        printf("Entered year %d not found in records\n",y);
}

//a function to print the data of a student whose roll number is given.
void givenRNum(struct students r[0]){
    int i,g;
    found=0;
    
    printf("\nEnter a rool number to print the data of a student whose roll number is Entered :");
    scanf("%d",&g);
    
    for (i=0; i<5; i++) {
        if(r[i].roolNum==g){
            found=1;
            printf("\nEntered Rool number student Data\n\n");
            printf("RoolNumber: %d\n",r[i].roolNum);
            printf("Name: %s\n",r[i].Name);
            printf("Department: %s\n",r[i].department);
            printf("Course: %s\n",r[i].course);
            printf("Year of Join: %d\n",r[i].yearJoin);
        }
    }
    if(found==0)
        printf("Entered Rool Number %d not found in records\n",g);
}
