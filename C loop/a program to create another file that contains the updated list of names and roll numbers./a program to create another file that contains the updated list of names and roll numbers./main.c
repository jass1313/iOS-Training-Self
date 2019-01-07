//
//  main.c
//  a program to create another file that contains the updated list of names and roll numbers.
//
//  Created by KiwiTech on 07/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Assume that a Master file contains two fields, Roll no. and
 name of the student. At the end of the year, a set of students
 join the class and another set leaves. A Transaction file
 contains the roll numbers and an appropriate code to add or
 delete a student.
 Write a program to create another file that contains the
 updated list of names and roll numbers. Assume that the
 Master file and the Transaction file are arranged in ascending
 order by roll numbers. The updated file should also be in
 ascending order by roll numbers.*/

int main() {
    
    struct class {
        int roolNum;
        char names[10];
    };
    struct classModify {
        int roolNum;
        char names[10];
        char join_Leave;
    };
    struct class student;
    struct classModify modify;
    int choice,count,join,leave,wrong;
    char another;
    FILE *fp,*fl,*ft;
    fp =fopen("masterFile.c", "rb+");
    if(fp==NULL) {
        fp=fopen("masterFile.c", "wb+");
    }
    fl =fopen("transFile.c", "rb+");
    if(fl==NULL) {
        fl=fopen("transFile.c", "wb+");
    }
    
    puts("\n\t\tchoice : \n");
    puts("1. Add Student Names in Mater file");
    puts("2. Display the Master file records");
    puts("3. Add recods in Transaction file");
    puts("4. Display the Transaction file records");
    puts("5. Add or Delete Student name from master file");
    puts("0. Exit");
    while (1) {
        puts("\t\nEnter the choice : ");
        fflush(stdin);
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                fseek(fp, 0, SEEK_END);
                another='y';
                while (another=='y') {
                    printf("Enter the rool number and srudent name\n");
                    scanf("%d %s",&student.roolNum,student.names);
                    fwrite(&student, sizeof(student), 1, fp);
                    puts("want to add more student name y/n: \n");
                    fflush(stdin);
                    scanf("%s",&another);
                }
                break;
            case 2:
                count=0;
                rewind(fp);
                printf("\tStudent List of master file\n");
                while (fread(&student, sizeof(student), 1, fp)) {
                    printf("\n\t%d\t%s",student.roolNum,student.names);
                    count++;
                }
                if (!count){
                    printf("\n\tSorry.!! Master file is blank\n");
                    printf("\n\tPlease frist write the data in Master file\n");
                }
                break;
            case 3:
                fseek(fl, 0, SEEK_END);
                another='y';
                while (another=='y') {
                    printf("Enter the rool number,name and join or leave J/L\n");
                    scanf("%d %s %s",&modify.roolNum,modify.names,&modify.join_Leave);
                    fwrite(&modify, sizeof(modify),1, fl);
                    puts("want to add more students name in update list y/n: \n");
                    fflush(stdin);
                    scanf("%s",&another);
                }
                break;
            case 4:
                count=0;
                rewind(fl);
                printf("\tStudent List of Transaction file\n");
                while (fread(&modify, sizeof(modify), 1, fl)) {
                    printf("\n\t%d\t%s\t%c",modify.roolNum,modify.names,modify.join_Leave);
                    count++;
                }
                if (!count){
                    printf("\n\tSorry.!! Transaction file is blank\n");
                    printf("\n\tPlease frist write the data in Transaction File\n");
                }
                break;
            case 5:
                join=0;
                leave=0;
                wrong=0;
                count=0;
                rewind(fl);
                while (fread(&modify, sizeof(modify), 1, fl)==1) {
                    switch (modify.join_Leave) {
                        case 'J':
                        case 'j':
                                student.roolNum=modify.roolNum;
                                strcpy(student.names,modify.names);
                                fseek(fp, 0, SEEK_END);
                                fwrite(&student, sizeof(student), 1, fp);
                                join++;
                            break;
                        case 'L':
                        case 'l':
                            ft=fopen("temp.c", "wb+");
                            rewind(fp);
                            while (fread(&student, sizeof(student), 1, fp)==1) {
                                if(student.roolNum!=modify.roolNum){
                                    fwrite(&student, sizeof(student), 1, ft);
                                }else
                                    leave++;
                            }
                            fclose(fp);
                            fclose(ft);
                            remove("masterFile.c");
                            rename("temp.c", "masterFile.c");
                            fopen("masterFile.c","rb+");
                            break;
                        default:
                            wrong++;
                            break;
                    }
                 }
                printf("%d Student joind the class\n",join);
                printf("%d student leave the class\n",leave);
                printf("%d Wrong type Selection\n",wrong);
                printf("master Record Updated with new List\n");
                
                break;
            case 0:
                fclose(fp);
                fclose(fl);
                puts("Exit Successfully");
                exit(1);
            default:
                printf("Wrong Selection..!! Please Select again ur choice\n");
        }
    }
}
