//
//  main.c
//  a structure to specify data of customers in a bank
//
//  Created by KiwiTech on 17/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//
#include <stdio.h>

//a structure to specify data of customers in a bank. The data to be stored is: Account number, Name, Balance in account.
//(a) a function to print the Account number and name of each customer with balance below Rs. 100.
//(b) If a customer request for withdrawal or deposit,
struct Bank
{
    int AcNo;
    char Name[10];
    float Bal;
};

void balance(struct Bank bal[0]);
void deposit(struct Bank d[0]);
int main() {
    int choice;
    struct Bank cust[5]={73101,"Jass",300,
        73102,"Aman",50,
        73103,"Ram",500,
        73104,"Raju",20,
        73105,"Raman",300
    };
    printf("\n");
    printf("Hello Thank you for chosing our bank ! \n");
    printf("\nHow Can we help you ? \n");
    printf("Enter 1 for Customers List whoes balance is less than 100 : \n");
    printf("Enter 2 for Transaction :\n");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            balance(cust);
            break;
        case 2:
            deposit(cust);
            break;
        default:
            printf("Entered choice is invalid");
            break;
    }
}

// a function to print the Account number and name of each customer with balance below Rs. 100.
void balance(struct Bank b[0]) {
    int i;
    
    printf("\nCustomer whom balance below Rs. 100\n\n");
    for (i=0; i<5; i++) {
        if(b[i].Bal<100)
            printf("Account No.: %d \nName: %s \nBal: %f\n\n", b[i].AcNo,b[i].Name,b[i].Bal);
    }
}

//a customer request for withdrawal or deposit money in Bank account
void deposit(struct Bank d[0]){
    int i,a,c;
    float m;
    
    printf("\n\nWhat would u like to do : \n\n");
    printf("Enter 1 for Deposite : \n");
    printf("Enter 2 for Withdraw : \n");
    scanf("%d",&c);
    
    switch (c) {
        case 1:
            printf("\nDear customer please input your Account Number : ");
            scanf("%d",&a);
            for (i=0; i<5; i++) {
                if(d[i].AcNo==a) {
                    printf("\nHello : %s ! \nEnter amount to be deposite : ",d[i].Name);
                    scanf("%f",&m);
                    d[i].Bal=d[i].Bal+m;
                    printf("\n\nSuccessfully Deposited in your account \n");
                    printf("\nAccount Number     : %d",d[i].AcNo);
                    printf("\nName               : %s",d[i].Name);
                    printf("\nUpdated Balance is : %f\n",d[i].Bal);
                    break;
                }
            }
            if (d[i].AcNo!=a) {
                printf("\n%d This Account Number dont match with records" , a);
            }
            break;
        case 2:
            printf("\nDear customer please input your Account Number : ");
            scanf("%d",&a);
            for (i=0; i<5; i++) {
                if(d[i].AcNo==a) {
                    printf("\nHello : %s !\nEnter amount to be withdraw: ",d[i].Name);
                    scanf("%f",&m);
                    if (d[i].Bal>=m){
                        d[i].Bal=d[i].Bal-m;
                        printf("\nSuccessfully Withdraw in your account \n");
                        printf("\nAccount Number     : %d",d[i].AcNo);
                        printf("\nName               : %s",d[i].Name);
                        printf("\nUpdated Balance is : %f\n",d[i].Bal);
                        break;
                    } else {
                        printf("\nDear %s balance is insufficient for the specified withdrawal. your balance is : %f",d[i].Name, d[i].Bal);
                        break;
                    }
                }
            }
            if (d[i].AcNo!=a) {
                printf("\n%d This Account Number dont match with records" , a);
            }
            break;
        default:
            printf("Entered choice is invalid");
            break;
    }
}



