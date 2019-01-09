//
//  main.c
//  Given a text file, write a program to create another text file
//
//  Created by KiwiTech on 08/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 Given a text file, write a program to create another text file
 deleting the words “a”, “the”, “an” and replacing each one of
 them with a blank space. */
int main() {
    FILE *fp,*ft;
    int i;
    char ch[30];
    fp=fopen("main.c", "rb+");
    if(fp==NULL)
        fp=fopen("main.c", "wb+");
    ft=fopen("temp.txt", "wb+");
    while (fgets(ch, 29, fp)) {
        for (i=0; ch[i]!='\0'; i++) {
            if (ch[i]==' '||ch[i]==' '||
                ch[i]=='.'||ch[i]==','||
                ch[i]=='\n'||ch[i]=='\t')
            {
            if (ch[i+1]=='a'&&(ch[i+2]==' '||
                ch[i+2]=='\0'||ch[i+2]=='.'||
                ch[i+2]==','||ch[i+2]==EOF||
                ch[i+2]=='\t'||ch[i+2]=='\n'))
            {
                  ch[i+1]=' ';
            }
            if (ch[i+1]=='a'&&ch[i+2]=='n'&&
                (ch[i+3]==' '||ch[i+3]=='\0'||
                 ch[i+3]=='.'||ch[i+3]==','||
                 ch[i+3]==EOF||ch[i+3]=='\t'||
                 ch[i+3]=='\n'))
            {
                   ch[i+1]=' ';
                   ch[i+2]=' ';
            }
            if (ch[i+1]=='t'&&ch[i+2]=='h'&&ch[i+3]=='e'&&
                (ch[i+4]==' '||ch[i+4]=='\0'||
                 ch[i+4]=='.'||ch[i+4]==','||
                 ch[i+4]==EOF||ch[i+4]=='\t'||
                 ch[i+4]=='\n'))
            {
                ch[i+1]=' ';
                ch[i+2]=' ';
                ch[i+3]=' ';
            }
       }
    }
      fputs(ch, ft);
    }
    fclose(fp);
    fclose(ft);
    
}
