//
//  main.c
//  Write a program to update CUSTOMER.DAT’file i.e. if the trans type is ‘D’ then update the balance of ‘CUSTOMER.DAT’ by adding amount to balance for the corresponding accno.
//
//  Created by KiwiTech on 28/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include<stdio.h>
#include<string.h>

void display(char*);
void add_info(int, char*, float);
void transaction(int, char, float);

struct customer
{
    int accno;
    char name[30];
    float balance;
};

struct trans
{
    int accno;
    char trans_type;
    float amount;
};

int main()
{
    add_info(1, "Siraj", 1000);
    puts("\n\t\tBefore Transaction");
    display("customer.dat");
    transaction(1, 'd', 1000);
    puts("\n\t\tAfter Transaction");
    display("customer.dat");
  //  _getch();
    return 0;
}

void display(char *file)
{
    FILE *fp;
    struct customer holder;
    fp = fopen(file, "rb");
    while (fread(&holder, sizeof(holder), 1, fp) == 1)
    {
        printf("\n%d", holder.accno);
        printf(":\t%s", holder.name);
        printf("\t%f\n", holder.balance);
    }
    fclose(fp);
}

void add_info(int accno, char *name, float bal)
{
    FILE *fp;
    struct customer holder;
    fp = fopen("customer.dat", "rb+");
    if (fp == NULL)
        fp = fopen("customer.dat", "wb");
    fseek(fp, 0, SEEK_END);
    holder.accno = accno;
    strcpy(holder.name, name);
    holder.balance = bal;
    fwrite(&holder, sizeof(holder), 1, fp);
    fclose(fp);
}

void transaction(int accno, char ttype, float amount)
{
    FILE *fp, *temp;
    struct customer holder;
    fp = fopen("customer.dat", "rb");
    temp = fopen("temp.dat", "wb");
    while (fread(&holder, sizeof(holder), 1, fp) == 1)
    {
        if (holder.accno == accno)
        {
            switch (ttype)
            {
                case 'd':
                case 'D':
                    holder.balance += amount;
                    break;
                case 'w':
                case 'W':
                    if ((holder.balance - amount) < 100)
                    {
                     //   system("cls");
                        printf("\nYour account balance is low.\n");
                        printf("Transaction failed!!");
                    //    _getch();
                    }
                    else
                        holder.balance -= amount;
                    break;
                default:
                  //  system("cls");
                    puts("Wrong transaction type!!");
                    puts("\nTry Again!!");
                    fclose(fp);
                    fclose(temp);
                    remove("temp.dat");
                    return;
            }
        }
        fwrite(&holder, sizeof(holder), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("customer.dat");
    rename("temp.dat", "customer.dat");
}
