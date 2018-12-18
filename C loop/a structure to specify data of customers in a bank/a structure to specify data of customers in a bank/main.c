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
    struct Bank cust[5]={73101,"Jass",300,
                         73102,"Aman",50,
                         73103,"Ram",500,
                         73104,"Raju",20,
                         73105,"Raman",300
    };
    balance(cust);
    deposit(cust);
}

// a function to print the Account number and name of each customer with balance below Rs. 100.
void balance(struct Bank b[0]) {
    int i;

    printf("Account numbers with name of each customer whom balance below Rs. 100\n");
    for (i=0; i<5; i++) {
        if(b[i].Bal<100)
        printf("Account No.: %d \nName: %s \nBal: %f\n\n", b[i].AcNo,b[i].Name,b[i].Bal);
    }
}

//a customer request for withdrawal or deposit money in Bank account
void deposit(struct Bank d[0]){
    int i,a,c;
    float m;
    
    printf("Dear Customer Enter your Account Number For Deposit or withdrawal : ");
    scanf("%d",&a);
    printf("\nHow much money you want to deposit or withdraw : ");
    scanf("%f",&m);
    printf("\nFor withdraw Enter 0 or For Deposit Enter 1 : ");
    scanf("%d",&c);
    
    for (i=0; i<5; i++) {
        if(d[i].AcNo==a){
            if(c==1){
                d[i].Bal=d[i].Bal+m;
                printf("\nDear %s %f Rupees is deposit in your account and current balance is %f : ",d[i].Name, m, d[i].Bal);
                break;
            } else if (c==0 && d[i].Bal>=m){
                d[i].Bal=d[i].Bal-m;
                 printf("\nDear %s %f Rupees is withraw from your account and current balance is %f : ",d[i].Name, m, d[i].Bal);
                break;
            } else {
                printf("\nDear %s ur balance is insufficient for the specified withdrawal Balance is %f : ",d[i].Name, d[i].Bal);
                break;
            }
        }
    }
     if (d[i].AcNo!=a){
        printf("\n%d This Account Number dont match with records" , a);
    }
}
