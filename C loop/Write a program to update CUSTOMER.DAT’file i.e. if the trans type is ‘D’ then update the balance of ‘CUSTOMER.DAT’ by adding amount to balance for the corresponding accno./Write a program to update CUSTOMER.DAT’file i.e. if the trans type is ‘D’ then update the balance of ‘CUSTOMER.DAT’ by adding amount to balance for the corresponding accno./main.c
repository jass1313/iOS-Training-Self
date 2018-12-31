//
//  main.c
//  Write a program to update CUSTOMER.DAT’file i.e. if the trans type is ‘D’ then update the balance of ‘CUSTOMER.DAT’ by adding amount to balance for the corresponding accno.
//
//  Created by KiwiTech on 28/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void display(char*);
void add_info(int, char*, float);
void transaction(int, char, float);

struct customer {
    int accno;
    char name[30];
    float balance;
};

struct trans {
    int accno;
    char trans_type;
    float amount;
};

int main() {
    struct customer add;
    struct trans addtrans;
    int choice;
    char another='y';

    while(another=='y'){
        
        puts("\n\t\tEnter Choice");
        puts("1. Add Acoount info");
        puts("2. Account List");
        puts("3. Transaction");
        puts("4. Exit");
        scanf("%d",&choice);
        switch (choice) {
        case 1:
            puts("Enter Account no. Name and Balance");
            scanf("%d %s %f",&add.accno,add.name,&add.balance );
            add_info(add.accno, add.name, add.balance);
        case 2:
            puts("\n  Account List ");
            display("/Users/kiwitech/Desktop/main.c");
              break;
        case 3:
            puts("Enter Account no. Type_D/W and Amount");
            scanf("%d %c %f",&addtrans.accno,&addtrans.trans_type,&addtrans.amount);
            transaction(addtrans.accno, addtrans.trans_type, addtrans.amount);
            puts("\n Account List After Transaction");
            display("/Users/kiwitech/Desktop/main.c");
            break;
        case 4:
                exit(1);
            break;
        default:
            break;
        }
        puts("\nYou want do one more transaction y/n\n");
        scanf("%s",&another);
    }
    return 0;
}
void display(char *file) {
    FILE *fp;
    struct customer holder;
    fp = fopen("file", "rb");
    if (fp==NULL)
        printf("Please first creat file and add accounts info");
    else {
    while (fread(&holder, sizeof(holder), 1, fp) == 1) {
        printf("\n%d", holder.accno);
        printf(":\t%s", holder.name);
        printf("\t%f\n", holder.balance);
    }
    }
    fclose(fp);
}

void add_info(int accno, char *name, float bal) {
    FILE *fp;
    struct customer holder;
    fp = fopen("/Users/kiwitech/Desktop/main.c", "rb+");
    if (fp == NULL)
        fp = fopen("/Users/kiwitech/Desktop/main.c", "wb");
    fseek(fp, 0, SEEK_END);
    holder.accno = accno;
    strcpy(holder.name, name);
    holder.balance = bal;
    fwrite(&holder, sizeof(holder), 1, fp);
    fclose(fp);
}

void transaction(int accno, char ttype, float amount) {
    FILE *fp, *temp;
    struct customer holder;
    fp = fopen("/Users/kiwitech/Desktop/main.c", "rb");
    temp = fopen("/Users/kiwitech/Desktop/temp.c", "wb");
    while (fread(&holder, sizeof(holder), 1, fp) == 1) {
        if (holder.accno == accno) {
            switch (ttype) {
                case 'd':
                case 'D':
                    holder.balance += amount;
                    break;
                case 'w':
                case 'W':
                    if ((holder.balance - amount) < 100) {
                        printf("\nYour account balance is low.\n");
                        printf("Transaction failed!!");
                    } else
                        holder.balance -= amount;
                    break;
                default:
                    puts("Wrong transaction type!!");
                    puts("\nTry Again!!");
                    fclose(fp);
                    fclose(temp);
                    remove("/Users/kiwitech/Desktop/temp.c");
                    return;
            }
        }
        fwrite(&holder, sizeof(holder), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("/Users/kiwitech/Desktop/main.c");
    rename("/Users/kiwitech/Desktop/temp.c", "/Users/kiwitech/Desktop/main.c");
}
