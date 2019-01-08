//
//  main.c
//  Every employee has a unique empno and there are supposed to be no gaps between employee numbers. Records are entered into the data file in ascending order of employee number, empno.
//
//  Created by KiwiTech on 08/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 Every employee has a unique empno and there are supposed
 to be no gaps between employee numbers. Records are
 entered into the data file in ascending order of employee
 number, empno. It is intended to check whether there are
 missing employee numbers. Write a program segment to read
 the data file records sequentially and display the list of
 missing employee numbers. */
struct company {
    int empno;
    char name[30];
    int basic, grade;
};
int main(){
    FILE *fp;
    struct company emp;
    int choice,count;
    char another;
    fp=fopen("main.c", "rb+");
    if(fp==NULL){
        fp=fopen("main.c", "wb+");
    }
    
    puts("\n\t\tchoice : \n");
    puts("1. Add emp Names in file");
    puts("2. Display the emp records");
    puts("3. Missing emp ID");
    puts("0. Exit");
    
    while(1){
        puts("\t\nEnter the choice : ");
        fflush(stdin);
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                fseek(fp, 0, SEEK_END);
                another='y';
                while (another=='y') {
                    printf("Enter the empno name basic salary and grade\n");
                    scanf("%d %s %d %d",&emp.empno,emp.name,&emp.basic,&emp.grade);
                    fwrite(&emp, sizeof(emp), 1, fp);
                    puts("want to add more emp name y/n: \n");
                    fflush(stdin);
                    scanf("%s",&another);
                }
                break;
            case 2:
                count=0;
                rewind(fp);
                printf("\emp List of file\n");
                while (fread(&emp, sizeof(emp), 1, fp)) {
                    printf("\n\t%d\t%s\t%d\t%d",emp.empno,emp.name,emp.basic,emp.grade);
                    count++;
                }
                if (!count){
                    printf("\n\tSorry.!! file is blank\n");
                    printf("\n\tPlease frist write the data in file\n");
                }
                break;
            case 3:
                rewind(fp);
                int i=1;
                printf("The Emp Numbers. that are does't exists in the file\n");
                while (fread(&emp, sizeof(emp), 1, fp)==1) {
                    while(emp.empno!=i){
                        printf("\t%d",i++);
                    }
                    i++;
                }
                
                break;
            case 0:
                fclose(fp);
                puts("Exit Successfully\n");
                exit(1);
            default:
                printf("Wrong Selection..!! Please Select again ur choice\n");
        }
        
    }
}
