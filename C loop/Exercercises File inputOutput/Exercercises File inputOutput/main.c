//
//  main.c
//  Exercercises File inputOutput
//
//  Created by KiwiTech on 24/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
//Write a program to read a file and display contents with its line numbers.
int main() {
    FILE *fp;
    char ch;
    int lineNum=0;
    
    fp= fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r");
    
    while (1) {
        ch = fgetc(fp);
        
        if (ch==EOF)
            break;
        printf("%c",ch);
        
        if(ch=='\n')
            lineNum++;
    }
    fclose(fp);
    printf("%d",lineNum);
    
}*/
/*
    
//Write a program to find the size of a text file without traversing it character by character.
int main() {
    FILE *fp;
    char ch[60];
    int lineNum=0;
    
    fp= fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r");
    
    while (fgets(ch,59,fp)){
        
        printf("%s",ch);
    lineNum=lineNum+strlen(ch);
    }
    
    fclose(fp);
    printf("%d\n", lineNum);
}
*/
/*
   
//Write a program to add the contents of one file at the end of another.
int main(){
    FILE *fp,*fl;
    char ch;
    
    fp=fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r");
    fl=fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main copy.c", "w");
    
    while (1) {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        else
            fputc(ch, fl);
    }
    fclose(fp);
    fclose(fl);
}*/
//Suppose a file contains student’s records with each record containing name and age of a student. Write a program to read
//these records and display them in sorted order by name.
struct student {
    char ch[30];
    int age;
};
int main(){
    FILE *fp;
   
    struct student e[3];
    struct student temp;
    
    int i=0,j=0,n=2;
    fp=fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r");
    
    printf("Student records read from file & display \n");
    while ( fscanf(fp,"%s %d ", e[i].ch, &e[i].age ) != EOF) {
        
        printf("%s %d \n",e[i].ch,e[i].age);
        i++;
    }
    
    for(i=0;i<=n;i++)
        for(j=i+1;j<n;j++)
            if(e[i].ch[0] > e[j].ch[0]) {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
    printf("\nStudent records read from file & display in sorted order by name\n");
    for (i=0; i<=n; i++) {
        printf("%s %d \n",e[i].ch,e[i].age);
    }
}
