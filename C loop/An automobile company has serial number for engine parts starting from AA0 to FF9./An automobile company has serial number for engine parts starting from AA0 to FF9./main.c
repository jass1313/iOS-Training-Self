//
//  main.c
//  An automobile company has serial number for engine parts starting from AA0 to FF9.
//
//  Created by KiwiTech on 17/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

//An automobile company has serial number for engine part starting from AA0 to FF9
#include <stdio.h>
struct engine {
    char serialNumber[3];
    int Yearofmanufacture;
    char material[10];
    int quantity;
    char manufactured[10];
};

void retrieveinformation(struct engine eng[0],char *from,char *to);

int main() {
    int i=0,j=0;
    char c=65;
    struct engine eng[20];
    
    printf("Enter The Engine parts Details with Serial No. Between AA0 to FF9\n");
    for (i=0; i<20; i++) {
        printf("\nEnter Serial no. %c%c%d : ",c,c,j);
        scanf("%s",eng[i].serialNumber);
        printf("\nEnter Year of manufacture: ");
        scanf("%d",&eng[i].Yearofmanufacture);
        printf("\nEnter material: ");
        scanf("%s",eng[i].material);
        printf("\nEnter quantity: ");
        scanf("%d",&eng[i].quantity);
        printf("\nEnter manufactured: ");
        scanf("%s",eng[i].manufactured);
        j++;
        if(j==10){
        j=0;
        c++;
        }
    }
    
    char from[3];
    char to[3];
    printf("\nEnter the serial number, from where you want to start the list: ");
    scanf("%s", from);
    printf("\nEnter the serial at which you wan to end the list: ");
    scanf("%s", to);
    
    retrieveinformation(eng,from,to);
    
}

// a program to retrieve information on parts with serial numbers between From and To.
void retrieveinformation(struct engine eng[0],char from[0],char to[0]) {
    int i=0;

    //From
    i=(from[1]-65)*9 +(from[2]-48);
        printf("\nEngine Parts Details\n");
    while (i<20) {
         printf("Serial Number %s\n",eng[i].serialNumber);
         printf("Year of Manufacture %d\n",eng[i].Yearofmanufacture);
         printf("Material %s\n",eng[i].material);
         printf("Quantity %d\n",eng[i].quantity);
         printf("Manufactured %s\n",eng[i].manufactured);
        i++;
        printf("\n");
        //To
        if(eng[i].serialNumber[0]== to[0] && eng[i].serialNumber[2]== *(to+2)){
            printf("Serial Number %s\n",eng[i].serialNumber);
            printf("Year of Manufacture %d\n",eng[i].Yearofmanufacture);
            printf("Material %s\n",eng[i].material);
            printf("Quantity %d\n",eng[i].quantity);
            printf("Manufactured %s\n",eng[i].manufactured);
            return;
        }
    }
}

/*
 
 struct engine eng[10] = {"AA0",2006,"lights",5,"honda",
 "AA1",2008,"bumper",10,"maruti",
 "AA2",2012,"tyre",20,"maruti",
 "AA3",2016,"seats",10,"honda",
 "AA4",2017,"glass",2,"ford",
 "AA5",2018,"door",3,"hyundai",
 "AA6",2016,"rubber",6,"honda",
 "AA7",2015,"locks",5,"honda",
 "AA8",2013,"filters",6,"honda",
 "AA9",2012,"air",5,"honda"
 */
