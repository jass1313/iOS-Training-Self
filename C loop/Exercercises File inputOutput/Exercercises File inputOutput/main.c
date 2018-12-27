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
}*//*
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
}*//*

//a program to copy one file to another. While doing so replace all lowercase characters to their equivalent uppercase characters.
#include<ctype.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c", "r");
    if (fp1 == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }
    fp2 = fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main copy.c", "w");
    if (fp2 == NULL)
    {
        puts("File does not exist..");
        fclose(fp1);
        exit(1);
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        ch = toupper(ch);
        fputc(ch,fp2);
    }
    printf("\nFile successfully copied..");
    return 0;
    }*/
/*
//a program to copy one file to another. While doing so replace all lowercase characters to their equivalent uppercase characters.
//without standard fuction
int main()
{
    FILE *fp,*fo,*ft;
    char ch;
    int i=1,j=1,k=1;
    fp=fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c","r");
    fo=fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main copy.c","r");
    ft=fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main copy 2.c","w");
    
    while (1) {
        
        if (k==1||j==0){
                ch=fgetc(fp);
            if(ch==EOF)
                  i=0;
            if (ch=='\n')
                    k=2;
            if(i!=0)
             fputc(ch,ft);
        }
        if (k==2||i==0){
                ch=fgetc(fo);
             if(ch==EOF)
                 j=0;
            if (ch=='\n')
                    k=1;
            if(j!=0)
                fputc(ch,ft);
            
            if(i==0&&j==0)
                break;
    }
}
    
    fclose(fp);
    fclose(fo);
    fclose(ft);
}*//*
//a program to display the contents of a text file on the screen. Make following provisions:
//Display the name of the file whose contents are being displayed
int main()
{
    FILE *fptr;
    
    char filename[200]="/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main.c";
    char c;
    
    //printf("Enter the filename to open \n");
    //scanf("%s", filename);

    fptr = fopen(filename, "r");
    
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    c = fgetc(fptr);
    
    printf("File Name: %s\n",filename);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
    
    fclose(fptr);
    return 0;
}*/
    //a program to encrypt/decrypt
#include <stdio.h>

int main()
{
    int i, x;
    char str[100];
    
    printf("\nPlease enter a string:\t");
    gets(str);
    
    printf("\nPlease choose following options:\n");
    printf("1 = Encrypt the string.\n");
    printf("2 = Decrypt the string.\n");
    scanf("%d", &x);
    
    //using switch case statements
    switch(x)
    {
        case 1:
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value
            
            printf("\nEncrypted string: %s\n", str);
            break;
            
        case 2:
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] - 3; //the key for encryption is 3 that is subtracted to ASCII value
            
            printf("\nDecrypted string: %s\n", str);
            break;
            
        default:
            printf("\nError\n");
    }
    return 0;
}
