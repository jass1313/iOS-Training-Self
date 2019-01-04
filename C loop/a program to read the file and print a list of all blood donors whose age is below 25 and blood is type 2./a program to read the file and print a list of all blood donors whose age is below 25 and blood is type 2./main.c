//
//  main.c
//  a program to read the file and print a list of all blood donors whose age is below 25 and blood is type 2.
//
//  Created by KiwiTech on 04/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//
/*A hospital keeps a file of blood donors in which each record
has the format:
Name: 20 Columns
Address: 40 Columns
Age: 2 Columns
Blood Type: 1 Column (Type 1, 2, 3 or 4)
Write a program to read the file and print a list of all blood
donors whose age is below 25 and blood is type 2.*/
#include <stdio.h>
#include <stdlib.h>
/*
 struct hospital {
    char name[20];
    char address[40];
    int age;
    int bloodType;
};
struct hospital blood;

void add_info(void);
void display(void);
void display_selected(void);

int main() {
    int choice;
    char another='y';
    while(another=='y') {
        
        puts("\t\tEnter Choice");
        puts("1. Add Blood donor's info");
        puts("2. Display Blood donor's List");
        puts("3. Display Blood donor's User Selected List by age & blood type");
        puts("4. Exit");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                puts("1. Add Blood donor's info(Name,Address,Age,Type-1,2,3or4)");
                add_info();
            case 2:
                puts("2. Display Blood donor's List");
                display();
                break;
            case 3:
                puts("2. Display Blood donor's User Selected List by age & blood type");
                display_selected();
                break;
            case 4:
                printf("Programme Sucessfully Exit");
                exit(1);
                break;
            default:
                break;
        }
        puts("\nYou want do one something more y/n: ");
        scanf("%s",&another);
    }
    return 0;
}

void add_info(void) {
    FILE *fp;
    fp = fopen("main.c", "rb+");
    if (fp==NULL)
        fp=fopen("main.c", "wb");
    scanf("%s%s%d%d",blood.name,blood.address,&blood.age,&blood.bloodType);
    fseek(fp, 0, SEEK_END);
    fwrite(&blood, sizeof(blood), 1, fp);
    fclose(fp);
}

void display(void){
    FILE *fp;
    fp=fopen("main.c", "rb+");
    if(ferror(fp)){
        perror("main.c");
        exit(1);
    } else {
        while (fread(&blood, sizeof(blood), 1, fp)==1) {
            printf("\n%s",blood.name);
            printf("\t%s",blood.address);
            printf("\t%d",blood.age);
            printf("\t%d",blood.bloodType);
        }
    }
    fclose(fp);
}

void display_selected(void){
    FILE *fp;
    int count=0,ba,bt;
    printf("Enter the age\n");
    scanf("%d",&ba);
    printf("Enter the Blood type(1,2,3or4)\n");
    scanf("%d",&bt);
    
    fp=fopen("main.c", "rb+");
    if(ferror(fp)){
        perror("main.c");
        exit(1);
    } else {
        while (fread(&blood, sizeof(blood), 1, fp)==1) {
            if (blood.age<ba&&blood.bloodType==bt){
            printf("\n%s",blood.name);
            printf("\t%s",blood.address);
            printf("\t%d",blood.age);
            printf("\t%d",blood.bloodType);
                count++;
            }
        }
        if (count==0)
            printf("User Selected type data not find in records");
    }
    fclose(fp);
}
*/



//Text Mode Same Programe

struct blood
{
    char name[20];
    char address[40];
    int age;
    int blood_type;
};
struct blood data;

void add_info(void);
void display(char*);
void lessthen25(char*);

int main()
{
    int choice;
    printf("Enter the choice\n");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            add_info();
            case 2:
            display("Blood Donors Record.txt");
            break;
            case 3:
            lessthen25("Blood Donors Record.txt");
        default:
            break;
    }
    return 0;
}

void add_info(void)
{
    FILE *fp;
    char another = 'y';
    fp = fopen("Blood Donors Record.txt", "r+");
    if (fp == NULL)
        fp = fopen("Blood Donors Record.txt", "w");
    while(another=='y'){
    printf("Enter the blood donor's data(name,address,age,blood_type)\n");
    scanf("%s %s %d %d",data.name,data.address,&data.age,&data.blood_type);
    fseek(fp, 0, SEEK_END);
    fprintf(fp, "\n%s", data.name);
    fprintf(fp, "\t%s ", data.address);
    fprintf(fp, "\t%d ", data.age);
    fprintf(fp, "\t%d", data.blood_type);
        printf("Want to add more record y/n\n");
        scanf("%s",&another);
    }
    fclose(fp);
        
}

void display(char *file)
{
    FILE *fp;
    fp = fopen(file, "r");
    char str[20];
    while (fgets(str, 19, fp) != NULL)
        printf("%s", str);
    fclose(fp);
}

void lessthen25(char *file)
{
    FILE *fp;
    fp = fopen(file, "r");
    while (fscanf(fp,"%s %s %d %d",data.name,data.address,&data.age,&data.blood_type)!=EOF){
        if (data.age < 25){
            printf("\n%s", data.name);
            printf("\t%s", data.address);
            printf("\t%d", data.age);
            printf("\t%d", data.blood_type);
        }
    }
    fclose(fp);
}

