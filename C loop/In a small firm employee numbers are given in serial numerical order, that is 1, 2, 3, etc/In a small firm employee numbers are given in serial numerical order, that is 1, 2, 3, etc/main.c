//
//  main.c
//  In a small firm employee numbers are given in serial numerical order, that is 1, 2, 3, etc
//
//  Created by KiwiTech on 08/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*In a small firm employee numbers are given in serial
numerical order, that is 1, 2, 3, etc.
− Create a file of employee data with following information:
employee number, name, sex, gross salary.
− If more employees join, append their data to the file.
− If an employee with serial number 25 (say) leaves, delete
the record by making gross salary 0.
− If some employee’s gross salary increases, retrieve the
record and update the salary.
Write a program to implement the above operations.*/
int main() {
    struct company {
        int empcode;
        char name[10];
        char sex;
        float gross_sal;
    };
    struct company employee;
    int choice,count,empcode;
    float increases;
    char another;
    FILE *fp,*ft;
    fp =fopen("main.c", "rb+");
    if(fp==NULL) {
        fp=fopen("main.c", "wb+");
    }
    puts("\n\t\tchoice : \n");
    puts("1. Add emp Names in Mater file");
    puts("2. Display the emp records");
    puts("3. If more employees join, append their data to the file. ");
    puts("4. If an employee with serial number 25 (say) leaves, delete the record by making gross salary 0. ");
    puts("5. If some employee’s gross salary increases, retrieve the record and update the salary. ");
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
                    printf("Enter the emp code, name, sex m/f,gross_salary\n");
                    scanf("%d %s %c %f",&employee.empcode,employee.name,&employee.sex,&employee.gross_sal);
                    fwrite(&employee, sizeof(employee), 1, fp);
                    puts("employee added Successfully..want to add more employees name y/n: \n");
                    fflush(stdin);
                    scanf("%s",&another);
                }
                break;
            case 2:
                count=0;
                rewind(fp);
                printf("\employees List \n");
                while (fread(&employee, sizeof(employee), 1, fp)) {
                    printf("\n\t%d\t%s\t%c\t%f",employee.empcode,employee.name,employee.sex,employee.gross_sal);
                    count++;
                }
                if (!count){
                    printf("\n\tSorry.!! employees file is blank\n");
                    printf("\n\tPlease frist write the data\n");
                }
                break;
            case 3:
                fseek(fp, 0, SEEK_END);
                another='y';
                while (another=='y') {
                    printf("Enter the New employees: emp code,name, sex, basic_Salary\n");
                    scanf("%d %s %c %f",&employee.empcode,employee.name,&employee.sex,&employee.gross_sal);
                    fwrite(&employee, sizeof(employee),1, fp);
                    puts("New employee added Successfully..want to add more employee name in update list y/n: \n");
                    fflush(stdin);
                    scanf("%s",&another);
                }
                break;
            case 4:
                ft=fopen("temp.c", "wb+");
                empcode=0;
                printf("enter the emp code who want to leave\n");
                scanf("%d",&empcode);
                rewind(fp);
                while (fread(&employee, sizeof(employee), 1, fp)) {
                    if(employee.empcode==empcode)
                         employee.gross_sal=0;
                    if(employee.gross_sal!=0)
                       fwrite(&employee, sizeof(employee), 1, ft);
                        }
                fclose(fp);
                fclose(ft);
                remove("main.c");
                rename("temp.c", "main.c");
                fopen("main.c", "rb+");
                puts("employee delete Successfully");
                break;
            case 5:
                ft=fopen("temp.c", "wb+");
                empcode=0;
                increases=0;
                printf("enter the empcode who's salary is increase and how much\n");
                scanf("%d %f",&empcode,&increases);
                rewind(fp);
                while (fread(&employee, sizeof(employee), 1, fp)) {
                    if (employee.empcode==empcode) {
                        employee.gross_sal+=increases;
                    }
                     fwrite(&employee, sizeof(employee), 1, ft);
                }
                fclose(fp);
                fclose(ft);
                remove("main.c");
                rename("temp.c", "main.c");
                fopen("main.c", "rb+");
                puts("employee salary increase Successfully");
                break;
            case 0:
                fclose(fp);
                puts("Exit Successfully");
                exit(1);
            default:
                 printf("Wrong Selection..!! Please Select again ur choice\n");
        }
    }
}
