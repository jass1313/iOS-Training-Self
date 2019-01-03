//
//  main.c
//  a program to update CUSTOMER.DAT’file i.e. if the trans type is ‘D’ then update the balance of ‘CUSTOMER.DAT’ by adding amount to balance for the corresponding accno.
//
//  Created by KiwiTech on 31/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//
 /*a program to update FILE i.e. if the trans type is ‘D’ then update the balance of FILE by adding amount to balance for the corresponding accno and also add the fuctions for delete and modify the account from account list.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
void display (char *file);
void add_info(int accno, char *name,float balance);
void transaction(int accno, char ttype, float balance);
void accountRemove(int accRemove);
void modify(int accModify);

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
        
        puts("\t\tEnter Choice");
        puts("1. Add New Acoount info");
        puts("2. Account List");
        puts("3. Transaction");
        puts("4. Remove Account ");
        puts("5. Modify Account ");
        puts("6. Exit");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                puts("Enter Account no. Name and Balance");
                scanf("%d %s %f",&add.accno,add.name,&add.balance );
                add_info(add.accno, add.name, add.balance);
            case 2:
                puts("\n  Account List ");
                display("main.c");
                break;
            case 3:
                puts("Enter Account no. Type_D/W and Amount");
                scanf("%d %c %f",&addtrans.accno,&addtrans.trans_type,&addtrans.amount);
                transaction(addtrans.accno, addtrans.trans_type, addtrans.amount);
                puts("\n Account List After Transaction");
                display("main.c");
                break;
            case 4:
                puts("Enter account no for remove the account");
                scanf("%d",&addtrans.accno);
                accountRemove(addtrans.accno);
                puts("\n Account List After delete");
                display("main.c");
                break;
            case 5:
                puts("Enter account no for modify the account");
                scanf("%d",&addtrans.accno);
                modify(addtrans.accno);
                puts("\n Account List After modify");
                display("main.c");
                break;
            case 6:
                exit(1);
                break;
            default:
                break;
        }
        puts("\nYou want do one more transaction y/n: ");
        scanf("%s",&another);
    }
    return 0;
}
void display (char *file){
    FILE *fp;
    struct customer holder;
    fp= fopen(file, "rb");
    if (fp==NULL)
        printf("Please first add accounts info");
    else {
    while (fread(&holder, sizeof(holder), 1, fp)==1) {
        printf("\n%d",holder.accno);
        printf(":\t%s",holder.name);
        printf("\t%f",holder.balance);
    }
    }
    fclose(fp);
}
void add_info(int accno, char *name, float balance){
    FILE *fp;
    struct customer holder;
    fp=fopen("main.c", "rb+");
    if (fp==NULL)
        fp=fopen("main.c", "wb");
    fseek(fp, 0, SEEK_END);
    holder.accno=accno;
    strcpy(holder.name, name);
    holder.balance=balance;
    fwrite(&holder, sizeof(holder), 1, fp);
    fclose(fp);
}

void transaction(int accno, char ttype, float amount){
    FILE *fp,*temp;
    struct customer holder;
    fp=fopen("main.c", "rb+");
    temp=fopen("temp.c", "wb+");
    while (fread(&holder, sizeof(holder), 1, fp)==1){
        if (holder.accno==accno){
            switch (ttype) {
                case 'd':
                case 'D':
                    holder.balance+=amount;
                    break;
                case 'w':
                case 'W':
                    if ((holder.balance-amount)<100) {
                        printf("Balance is low");
                        printf("Transaction failed!");
                    } else
                        holder.balance-=amount;
                    break;
                default:
                    puts("Transaction wrong try again!");
                    fclose(fp);
                    fclose(temp);
                    remove("temp.c");
                   return;
            }
        }
        fwrite(&holder, sizeof(holder), 1, temp);
    }
        fclose(fp);
        fclose(temp);
        remove("main.c");
        rename("temp.c","main.c");
}

void accountRemove(int accRemove) {
        FILE *fp,*temp;
        struct customer holder;
        fp=fopen("main.c", "rb+");
        temp=fopen("temp.c", "wb");
        rewind(fp);
        while (fread(&holder, sizeof(holder), 1, fp)==1) {
            if(holder.accno!=accRemove)
                fwrite(&holder, sizeof(holder), 1, temp);
        }
            fclose(temp);
            fclose(fp);
            remove("main.c");
            rename("temp.c", "main.c");
    }

void modify(int accModify) {
    FILE *fp;
    struct customer holder;
    fp=fopen("main.c", "rb+");
    rewind(fp);
    while (fread(&holder, sizeof(holder), 1, fp)==1){
        if(holder.accno==accModify){
            printf("Enter new details Ac name nd balance");
            scanf("%d%s%f",&holder.accno,holder.name,&holder.balance);
            fseek(fp, -sizeof(holder), SEEK_CUR);
            fwrite(&holder, sizeof(holder), 1, fp);
            break;
    }
}
    fclose(fp);
}
*/

void display (char *file);
void add_info(void);
void transaction(void);
void accountRemove(void);
void modify(void);

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
struct customer holder;
struct trans add;

int main() {
    int choice;
    char another='y';
    
    while(another=='y'){
        
        puts("\t\tEnter Choice");
        puts("1. Add New Acoount info");
        puts("2. Account List");
        puts("3. Transaction");
        puts("4. Remove Account ");
        puts("5. Modify Account ");
        puts("6. Exit");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                add_info();
            case 2:
                puts("\n  Account List ");
                display("main.c");
                break;
            case 3:
                transaction();
                puts("\n Account List After Transaction");
                display("main.c");
                break;
            case 4:
                accountRemove();
                puts("\n Account List After delete");
                display("main.c");
                break;
            case 5:
                modify();
                puts("\n Account List After modify");
                display("main.c");
                break;
            case 6:
                exit(1);
                break;
            default:
                break;
        }
        puts("\nYou want do one more transaction y/n: ");
        scanf("%s",&another);
    }
    return 0;
}
void display (char *file){
    FILE *fp;
    fp= fopen(file, "rb");
    if (fp==NULL)
        printf("Please first add accounts info");
    else {
        while (fread(&holder, sizeof(holder), 1, fp)==1) {
            printf("\n%d",holder.accno);
            printf(":\t%s",holder.name);
            printf("\t%f",holder.balance);
        }
    }
    fclose(fp);
}

void add_info(void) {
    FILE *fp;
    puts("Enter Account no. Name and Balance\n");
    scanf("%d %s %f",&holder.accno,holder.name,&holder.balance );
    fp=fopen("main.c", "rb+");
    if (fp==NULL)
        fp=fopen("main.c", "wb");
    fseek(fp, 0, SEEK_END);
    fwrite(&holder, sizeof(holder), 1, fp);
    fclose(fp);
}

void transaction(void){
    FILE *fp,*temp;
    fp=fopen("main.c", "rb+");
    temp=fopen("temp.c", "wb+");
    puts("Enter Account no. Type_D/W and Amount\n");
    scanf("%d %c %f",&add.accno,&add.trans_type,&add.amount);
    while (fread(&holder, sizeof(holder), 1, fp)==1){
        if (holder.accno==add.accno){
            switch (add.trans_type) {
                case 'd':
                case 'D':
                    holder.balance+=add.amount;
                    break;
                case 'w':
                case 'W':
                    if ((holder.balance-add.amount)<100) {
                        printf("Balance is low");
                        printf("Transaction failed!");
                    } else
                        holder.balance-=add.amount;
                    break;
                default:
                    puts("Transaction wrong try again!");
                    fclose(fp);
                    fclose(temp);
                    remove("temp.c");
                    return;
            }
        }
        fwrite(&holder, sizeof(holder), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("main.c");
    rename("temp.c","main.c");
}

void accountRemove(void) {
    FILE *fp,*temp;
    fp=fopen("main.c", "rb+");
    temp=fopen("temp.c", "wb");
    puts("Enter account no for remove the account\n");
    scanf("%d",&add.accno);
    rewind(fp);
    while (fread(&holder, sizeof(holder), 1, fp)==1) {
        if(holder.accno!=add.accno)
            fwrite(&holder, sizeof(holder), 1, temp);
    }
    fclose(temp);
    fclose(fp);
    remove("main.c");
    rename("temp.c", "main.c");
}

void modify(void) {
    FILE *fp;
    fp=fopen("main.c", "rb+");
    puts("Enter account no for modify the account\n");
    scanf("%d",&add.accno);
    rewind(fp);
    while (fread(&holder, sizeof(holder), 1, fp)==1){
        if(holder.accno==add.accno){
            printf("Enter new details Ac name nd balance\n");
            scanf("%d%s%f",&holder.accno,holder.name,&holder.balance);
            fseek(fp, -sizeof(holder), SEEK_CUR);
            fwrite(&holder, sizeof(holder), 1, fp);
            break;
        }
    }
    fclose(fp);
}

