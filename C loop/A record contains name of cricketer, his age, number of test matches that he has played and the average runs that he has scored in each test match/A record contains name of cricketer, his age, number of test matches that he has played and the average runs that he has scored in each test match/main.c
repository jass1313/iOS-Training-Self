//
//  main.c
//  A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match
//
//  Created by KiwiTech on 18/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
A record contains name of cricketer, his age, number of test
matches that he has played and the average runs that he has
scored in each test match. with Use the qusort( ) standard library function.*/
struct cricketers {
    int avgRuns;
    char name[20];
    int age;
    int testMatches;
    
};

//Use the qsort( ) standard library function.
int compare(const void *a, const void *b)
{
    int l=((struct cricketers *)a)->avgRuns;
    int r=((struct cricketers *)b)->avgRuns;
    return (l-r);
}

void printRecord(struct cricketers record[0]);

int main() {
    struct cricketers record[5] = {
    50,"Rahul",35,100,
    60,"Sachin",40,120,
    70,"yuvraj",38,80,
    50,"harbajan",39,50,
    30,"jasprit",30,20,
    };
    printRecord(record);
 }
//a program to read these records and arrange them in ascending order by average runs.
void printRecord(struct cricketers record[0]){
    int i;
    
    printf("\nRecords in ascending order by average runs. \n\n");
    for (i=0; i<5; i++) {
        qsort(record,5,sizeof(struct cricketers) ,compare);
        printf("Name        : %s\n",record[i].name);
        printf("Age         : %d\n",record[i].age);
        printf("Test Matches: %d\n",record[i].testMatches);
        printf("Avarage Runs: %d\n\n",record[i].avgRuns);
    }
}

