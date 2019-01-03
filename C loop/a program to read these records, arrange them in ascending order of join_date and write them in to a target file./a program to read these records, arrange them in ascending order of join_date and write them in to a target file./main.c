//
//  main.c
//  a program to read these records, arrange them in ascending order of join_date and write them in to a target file.
//
//  Created by KiwiTech on 03/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//
// a program to read these records, arrange them in ascending order of join_date and write them in to a target file.
#include <stdio.h>
#include <stdlib.h>

struct date
{
    int d, m, y ;
} ;
struct employee
{
    int empcode ;
    char empname[20] ;
    struct date join_date ;
    float salary ;
} ;
struct employee data;
struct date dd;
void add_info(void);
void display(void);
void display_acen(char *file);
int main() {
    int choice;
    char another='y';
    while(another=='y') {
        
        puts("\t\tEnter Choice");
        puts("1. Add emp info");
        puts("2. Emp List");
        puts("3. Employes List in ascending order of join_date");
        puts("4. Exit");
        scanf("%d",&choice);
        switch (choice) {
        case 1:
            puts("Enter the Employee info empcode,empname,salary");
            add_info();
        case 2:
            printf("\tThe Employes List\n\n");
            display();
            break;
        case 3:
            printf("\tThe Employes List in ascending order of join_date\n\n");
            display_acen("main.c");
            break;
        case 4:
            exit(1);
            break;
        default:
           break;
    }
        puts("\nYou want do one more transaction y/n: ");
        scanf("%s",&another);
    }
    return 0;
}

void add_info(void){
    FILE *fp;
    scanf("%d%s%f",&data.empcode,data.empname,&data.salary);
    puts("enter the date");
    scanf("%d%d%d",&dd.d,&dd.m,&dd.y);
    data.join_date=dd;
    fp=fopen("main.c", "rb+");
    if (fp==NULL)
        fp=fopen("main.c", "wb");
        fseek(fp, 0, SEEK_END);
        fwrite(&data, sizeof(data), 1, fp);
    fclose(fp);
}

void display(void){
    
    FILE *fp;
    fp=fopen("main.c", "rb+");
    if (fp==NULL)
        printf("File is null");
    else {
        while(fread(&data, sizeof(data), 1, fp)==1) {
            printf("\n%d",data.empcode);
            printf("\t%s",data.empname);
            printf("\t%d-%d-%d",data.join_date.d,data.join_date.m,data.join_date.y);
            printf("\t%f",data.salary);
        }
    }
    fclose(fp);
}

void display_acen(char *file){
    FILE *fp;
    int i=0,j,count;
    struct employee e[3],temp;
    fp=fopen(file, "rb");
    if (fp==NULL){
        printf("File is null");
        exit(1);
    }
      while(fread(&e[i], sizeof(e[i]), 1, fp)==1) {
          i++;
        }
    count=i;
    for (i=0;i<count;i++){
        for(j=i+1;j<count;j++){
            if (e[i].join_date.y >= e[j].join_date.y)
                if (e[i].join_date.y > e[j].join_date.y){
                    temp=e[i];
                    e[i]=e[j];
                    e[j]=temp;
                } else {
                    if (e[i].join_date.m >= e[j].join_date.m)
                    if (e[i].join_date.m > e[j].join_date.m){
                        temp=e[i];
                        e[i]=e[j];
                        e[j]=temp;
                    }
                } else
                    if (e[i].join_date.d >= e[j].join_date.d){
                        temp=e[i];
                        e[i]=e[j];
                        e[j]=temp;
                }
        }
    }
    for (i=0; i<count; i++)
    {
        printf("\n%d", e[i].empcode);
        printf("\t%s", e[i].empname);
        printf("\t%d-%d-%d", e[i].join_date.d,e[i].join_date.m,e[i].join_date.y);
        printf("\t%f", e[i].salary);
    }
    fclose(fp);
}







/*
struct date
{
    int d, m, y;
};

struct employee
{
    char empcode[6];
    char empname[20];
    struct date join_date;
    float salary;
};

//To display list in way they are actually saved in disk.
void display(char*);
//To make file before sorting them
void add_info(char*, char*, struct date, float);
//Sort by date of joining
void sortbydoj(char*);
void swap(struct employee*, struct employee*);

int main()
{
    struct date d = {05, 01, 1994};
    add_info("EMP01","Siraj", d,  50000.00);
    d.d = 17; d.m = 5; d.y = 1994;
    add_info("EMP04","Karan", d,45000.00);
    d.d = 7; d.m = 7; d.y = 1995;
    add_info("EMP03","Deepak", d,45000.00);
    d.d = 2; d.m = 11; d.y = 1995;
    add_info("EMP02","Azad",d,45000.00);
    d.d = 15; d.m = 1; d.y = 2001;
    add_info("EMP04", "Vijay", d, 21000.00);
    d.d = 24; d.m = 5; d.y = 1993;
    add_info("EMP06", "Shanu", d, 55000.00);
    sortbydoj("Record.dat");
    return 0;
}


void add_info(char *code, char *name, struct date doj, float salary)
{
    FILE *fp;
    fp = fopen("Record.dat", "rb+");
    if (fp == NULL)
        fp = fopen("Record.dat", "wb");
    struct employee e;
    strcpy(e.empcode, code);
    strcpy(e.empname, name);
    e.join_date = doj;
    e.salary = salary;
    fseek(fp, 0, SEEK_END);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
}

void display(char *file)
{
    FILE *fp;
    struct employee e;
    fp = fopen(file, "rb");
    while (fread(&e, sizeof(e), 1, fp) == 1)
    {
        printf("\n%s", e.empcode);
        printf("\t%s", e.empname);
        printf("\t%d", e.join_date.d);
        printf("\t%d", e.join_date.m);
        printf("\t%d", e.join_date.y);
        printf("\t%f\n", e.salary);
    }
    fclose(fp);
}

void swap(struct employee *a, struct employee *b)
{
    struct employee temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sortbydoj(char *file)
{
    int i = 0, j, count;
    FILE *fp1;
    struct employee e[100], temp;
    fp1 = fopen(file, "rb");
    if (fp1 == NULL)
    {
        puts("\nUnable to open file or the file do not exist.");
        exit(1);
    }
    while (1)
    {
        //Saving the data in the array of structures
        if (fread(&e[i], sizeof(e[i]), 1, fp1) != 1)
            break;
        i++;
    }
    
    //Total number of records
    count = i;
    
    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (e[i].join_date.y >= e[j].join_date.y)
                if (e[i].join_date.y > e[j].join_date.y)
                    swap(&e[i], &e[j]);
                else
                    if (e[i].join_date.m >= e[j].join_date.m)
                        if (e[i].join_date.m > e[j].join_date.m)
                            swap(&e[i], &e[j]);
                        else if (e[i].join_date.d >= e[j].join_date.d)
                            swap(&e[i], &e[j]);
        }
    }
    
    
    //printing the array after sorting by date of joining
    
    printf("Employee Id\tName\tdd  mm  yyyy\tSalary\n");
    for (i = 0; i < count; i++)
    {
        printf("\n%-12s", e[i].empcode);
        printf("\t%s", e[i].empname);
        printf("\t % 2d", e[i].join_date.d);
        printf("% 2d", e[i].join_date.m);
        printf("% 2d", e[i].join_date.y);
        printf("\t%2.2f\n", e[i].salary);
        
    }
}
*/
