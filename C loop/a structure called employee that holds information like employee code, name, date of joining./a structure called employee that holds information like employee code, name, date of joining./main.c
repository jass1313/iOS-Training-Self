//
//  main.c
//  a structure called employee that holds information like employee code, name, date of joining.
//
//  Created by KiwiTech on 19/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
/*a structure called employee that holds information
like employee code, name, date of joining. Write a program to
create an array of the structure and enter some data into it.
Then ask the user to enter current date. Display the names of
those employees whose tenure is 3 or more than 3 years
according to the given current date.*/
struct employee {
    char empcod[10];
    char name[10];
    int dd,mm,yyyy;
};

int main() {
    struct employee e[5] = {
        "KTI0870","JASS",17,10,2015,
        "KTI0871","RAM",12,10,2014,
        "KTI0872","SHAM",15,12,2013,
        "KTI0873","SIMRAN",13,11,2017,
        "KTI0874","SIMAR",13,12,2018,
        
    };
    int i,d,m,y;
    
    printf("enter current date dd/mm/yy\n");
    scanf("%d%d%d",&d,&m,&y);
    
    for (i=0; i<5; i++) {
        if (y-e[i].yyyy>3) {
            printf("employee code : %s\n",e[i].empcod);
            printf("Name          : %s\n\n",e[i].name);
        }
        if (y-e[i].yyyy==3){
            if (e[i].mm>m) {
                printf("employee code : %s\n",e[i].empcod);
                printf("Name          : %s\n\n",e[i].name);
            }
        }
        if (e[i].mm==m) {
            if (e[i].dd>=d) {
                printf("employee code : %s\n",e[i].empcod);
                printf("Name          : %s\n\n",e[i].name);
            }
        }
    }
    return 0;
}
