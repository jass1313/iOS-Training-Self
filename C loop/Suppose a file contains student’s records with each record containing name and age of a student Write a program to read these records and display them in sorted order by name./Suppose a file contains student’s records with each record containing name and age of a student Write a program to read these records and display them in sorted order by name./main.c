//
//  main.c
//  Suppose a file contains student’s records with each record containing name and age of a student Write a program to read these records and display them in sorted order by name.
//
//  Created by KiwiTech on 27/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
//student’s records with each record containing name and age of a student. Write a program to read these records and display them in sorted order by name.
struct student {
    char ch[10];
    int age;
};
struct student e[2] = {"anaa ", 20,"anaa", 77};
struct student temp;

int main(){
    int i=0,j=0,k,n=1;
    
    for(i=0;i<=n;i++)
        for(j=i+1;j<=n;j++){
            for(k=0;e[i].ch[k]!=0||e[j].ch[k]!=0;k++) {
                if (e[i].ch[k]==e[j].ch[k])
                    continue;
                if ((e[i].ch[k]-e[j].ch[k])>0){
                    temp=e[i];
                    e[i]=e[j];
                    e[j]=temp;
                }
            }
        }
    printf("\nStudent records read from file & display in sorted order by name\n");
    for (i=0; i<=n; i++) {
        printf("%s %d \n",e[i].ch,e[i].age);
    }
}



/*
 //Suppose a file contains student’s records with each record containing name and age of a student. Write a program to read
 //these records and display them in sorted order by name.
struct student {
    char ch[10];
    int age;
};
int main(){
    FILE *fp;
    
    struct student e[5];
    struct student temp;
    
    int i=0,j=0,k,n=4;
    fp=fopen("/Users/kiwitech/Desktop/iOS-Training-Self/C loop/try for File Input Output/try for File Input Output/main copy 2.c", "r");
    
    printf("Student records read from file & display \n");
    while ( fscanf(fp,"%s %d ", e[i].ch, &e[i].age ) != EOF) {
        
        printf("%s %d \n",e[i].ch,e[i].age);
        i++;
    }
    
    for(i=0;i<=n;i++)
        for(j=i+1;j<=n;j++){
            for(k=0;(e[i].ch[k]-e[j].ch[k])>=0;k++) {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    printf("\nStudent records read from file & display in sorted order by name\n");
    for (i=0; i<=n; i++) {
        printf("%s %d \n",e[i].ch,e[i].age);
    }
}
*/
/*
 //standard fuction strcmp used
#include <stdio.h>
#include <string.h>
int main()
{
    
    char name[10][8], tname[10][8], temp[8];
    int i, j, n;
    
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter %d names n \n", n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(tname[i], name[i]);
    }
    
    for (i = 0; i < n - 1 ; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    
    printf("\n----------------------------------------\n");
    printf("Input NamestSorted names\n");
    printf("------------------------------------------\n");
    
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%s\n", tname[i], name[i]);
    }
    
    printf("------------------------------------------\n");
    
    }
*/
