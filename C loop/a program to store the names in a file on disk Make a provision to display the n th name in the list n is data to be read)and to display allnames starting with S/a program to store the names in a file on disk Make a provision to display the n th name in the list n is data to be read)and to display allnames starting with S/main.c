//
//  main.c
//  a program to store the names in a file on disk Make a provision to display the n th name in the list n is data to be read)and to display allnames starting with S
//
//  Created by KiwiTech on 04/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
 Given a list of names of students in a class, write a program to
 store the names in a file on disk. display all
 names starting with S. */

int main() {
    FILE *fp;
    int choice,count=0;
    char names[10];
    fp =fopen("main.c", "rb+");
    
    if(fp==NULL) {
        fp=fopen("main.c", "wb+");
        exit(1);
    }
    while (1)
    {
        puts("\n\nEnter the choice : \n");
        puts("1. Add Student Names in file");
        puts("2. Display the recorss");
        puts("3. Display all names starting with S");
        puts("0. Exit");
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
                rewind(fp);
                printf("\tStudents List\n");
                while (fread(&names, sizeof(names), 1, fp)==1) {
                    printf("\n\t%s",names);
                }
                break;
            case 3:
                rewind(fp);
                printf("\tDisplaying all names starting with S\n");
                while (fread(&names, sizeof(names), 1, fp)==1) {
                    if(names[0]=='S'||names[0]=='s'){
                    printf("\n\t%s",names);
                        count++;
                    }
                } if (!count)
                    printf("\n\tSorry.!! Student Name not found starting with S from records");
                break;
            case 0:
                fclose(fp);
                exit(1);
            default:
                printf("Wrong Selection");
                fclose(fp);
                exit(1);
        }
    }
}

   
   
