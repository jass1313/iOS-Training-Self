//
//  main.c
//  a program to store the names in a file on disk Make a provision to display the n th name in the list n is data to be read)and to display allnames starting with S
//
//  Created by KiwiTech on 04/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 Given a list of names of students in a class, write a program to
 store the names in a file on disk. display all
 names starting with S. */

int main() {
    FILE *fp,*fl;
    int choice,count=0;
    char names[10];
    fp =fopen("main.c", "rb+");
    
    if(fp==NULL) {
        fp=fopen("main.c", "wb+");
        exit(1);
    }
    puts("\n\t\tchoice : \n");
    puts("1. Add Student Names in file");
    puts("2. Display the records");
    puts("3. Display all names starting with S");
    puts("4. Delete any name from records");
    puts("5. Modify any name from records");
    puts("0. Exit");
    while (1)
    {
        puts("\t\nEnter the choice : ");
        fflush(stdin);
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                fseek ( fp, 0 , SEEK_END ) ;
                char another='y';
                while (another=='y') {
                    printf("Enter the student name\n");
                    scanf("%s",names);
                    fwrite(&names, sizeof(names), 1, fp);
                    puts("want to add more student name y/n\n");
                    fflush ( stdin ) ;
                    scanf("%s",&another);
                }
                break;
            case 2:
                count=0;
                rewind(fp);
                printf("\tStudents List\n");
                while (fread(&names, sizeof(names), 1, fp)==1) {
                    printf("\n\t%s",names);
                    count++;
                }
                if (!count){
                    printf("\n\tSorry.!! records List is blanks\n");
                    printf("\n\tPlease frist write the data in records\n");
                }
                break;
            case 3:
                 count=0;
                rewind(fp);
                printf("\tDisplaying all names starting with S\n");
                while (fread(&names, sizeof(names), 1, fp)==1) {
                    if(names[0]=='S'||names[0]=='s'){
                    printf("\n\t%s",names);
                        count++;
                    }
                } if (!count)
                    printf("\n\tSorry.!! Student Name did not found starting with S from records\n");
                break;
            case 4:
                fl=fopen("temp.c", "wb+");
                count=0;
                rewind(fp);
                char name[10];
                printf("\tPlease enter the name for delete record\n");
                scanf("%s",name);
                while (fread(&names, sizeof(names), 1, fp)==1) {
                    if(strcmp(names,name)!=0)
                        fwrite(&names, sizeof(names), 1, fl);
                    else
                        count++;
                }
                if (!count)
                    printf("\n\tSorry.!! Typed Name not found in records\n");
                else
                    printf("\n\tTyped Name Successfully delete from records\n");
                fclose(fp);
                fclose(fl);
                remove("main.c");
                rename("temp.c", "main.c");
                fopen("main.c", "rb+");
                break;
            case 5:
                count=0;
                rewind(fp);
                printf("\tPlease enter the name for modify name\n");
                scanf("%s",name);
                while (fread(&names, sizeof(names), 1, fp)==1) {
                    if(strcmp(names,name)==0){
                        puts("Please Enter the new name");
                        scanf("%s",names);
                        fseek(fp, -sizeof(names), SEEK_CUR);
                        fwrite(&names, sizeof(names), 1, fp);
                        count++;
                        break;
                    }
                }
                if (count)
                    printf("Your entered name Successfully modyfied with new name");
                else
                    printf("Your Entered name did not found in the records");
                break;
            case 0:
                fclose(fp);
                puts("Exit Successfully");
                exit(1);
            default:
                printf("Wrong Selection..!! Please Select again ur choice");
                
        }
    }
}

   
   
