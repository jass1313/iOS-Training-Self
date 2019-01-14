//
//  main.c
//  Operations On Bits
//
//  Created by KiwiTech on 10/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void showbits ( int n );
/*
 //One’s Complement Operator
int showbits(int);
int main( )
{
    int j, k ;
    for ( j = 0 ; j <= 3 ; j++ )
    {
        printf ( "\nDecimal %d is same as binary ", j ) ;
        showbits ( j ) ;
        k = ~j ;
        printf ( "\nOne’s complement of %d is ", j ) ;
        showbits ( k ) ;
    }
}

int showbits(int j){
    return 0;
}*/


/* //File encryption utility
#include "stdio.h"
int main( )
{
    FILE *fs, *ft ;
    char ch ;
    fs = fopen ( "SOURCE.C", "r" ) ;
    ft = fopen ( "TARGET.C", "w" ) ;
                if ( fs == NULL || ft == NULL )
                { printf ( "\nFile opening error!" ) ;
                    exit ( 1 ) ;
                }
    
    
                while ( ( ch = getc ( fs ) ) != EOF )
                putc ( ~ch, ft ) ;
                fclose ( fs ) ;
                fclose ( ft ) ;
    }
*/
/*
//File decryption utility
#include "stdio.h"
int main( )
{
    FILE *fs, *ft ;
    char ch ;
    
    ft = fopen ( "TARGET.C", "r" ) ;
    fs = fopen ( "SOURCE.C", "w" ) ;
    if ( fs == NULL || ft == NULL )
    { printf ( "\nFile opening error!" ) ;
        exit ( 1 ) ;
    }
    
    
    while ( ( ch = getc ( ft ) ) != EOF )
        putc ( ~ch, fs ) ;
    fclose ( fs ) ;
    fclose ( ft ) ;
    }
*/
/*
//Right Shift Operator
int main( )
{
    int i = 5225, j, k ;
    printf ( "\nDecimal %d is same as binary ", i ) ;
    //showbits ( i ) ;
    for ( j = 0 ; j <= 5 ; j++ )
    {
        k = i >>j ;
        printf ( "\n%d right shift %d gives ", i, j ) ;
        //showbits ( k ) ;
    }
}*//*
//Left Shift Operator
int main( )
{
    int i = 5225, j, k ;
    printf ( "\nDecimal %d is same as ", i ) ;
    //showbits ( i ) ;
    for ( j = 0 ; j <= 4 ; j++ )
    {
        k = i <<j ;
        printf ( "\n%d left shift %d gives ", i, j ) ;
       // showbits ( k ) ;
    }
}*//*
// Decoding date field in directory entry using bitwise operators according to 4bytes = 32bits
int main( )
{
    unsigned int d = 9, m = 3, y = 1990, year, month, day, date ;
    date = ( y - 1980 ) * 512 + m * 32 + d ;
    printf ( "\nDate = %u", date ) ;
    year = 1980 + ( date >> 9 ) ;
    month = ( (date << 23 ) >> 28 ) ;
    day = ( (date << 27 ) >> 27 ) ;
    printf ( "\nYear = %u ", year ) ;
    printf ( "Month = %u ", month ) ;
    printf ( "Day = %u ", day ) ;
}
*//*
// To test whether a bit in a number is ON or OFF
int main( )
{
    int i = 5225, j ;
    printf ( "\nvalue of i = %d\n", i ) ;
    j = i & 8;
    if ( j == 0 ){
        showbits(i);
        printf ( "\nand its  bit is off\n" ) ;
    }else{
        showbits(i);
        printf ( "\nand its  bit is on\n" ) ;
    }
}*/
/*
// status change
int main()
{
    int a = 9, b = 3;
    showbits(b);
    printf("Output = %d", a|b);
    return 0;
}
*//*
int main( )
{
    int b = 3 ;
    b = b ^ 9 ;
    printf ( "\n%d\n", b ) ; // this will print 62
    showbits(b);
    b = b ^ 9 ;
    printf ( "\n%d\n", b ) ; // this will print 50
    showbits(b);
}
*/
void showbits ( int n )
{
    int i, k, andmask ;
    
    for ( i = 31 ; i >= 0 ; i-- )
    {
        andmask = 1 << i ;
        //printf("%d ",andmask);
        k = n & andmask ;
        k == 0 ? printf ( "0" ) : printf ( "1" ) ;
    }
    printf("\n");
}

/*
int main() {
    
    char color;
    int num;
    
    printf("Please enter the number(0-6): ");
    scanf("%d",&num);
    
    color=1<<num;
    
    printf("\n\n");
    
    if(num==0 && color==1)
        printf("Violet");
    
    else if(num==1 && color==2)
        printf("Indigo");
    
    else if(num==2 && color==4)
        printf("Blue");
    
    else if(num==3 && color==8)
        printf("Green");
    
    else if(num==4 && color==16)
        printf("Yellow");
    
    else if(num==5 && color==32)
        printf("Orange");
    
    else if(num==6 && color==64)
        printf("Red");
    
    else
        printf("Wrong color number!");
    
    int j;
    j = color & 8;
    if ( j == 0 ){
        showbits(color);
        printf ( "\nand its  bit is off\n" ) ;
    }else{
        showbits(color);
        printf ( "\nand its  bit is on\n" ) ;
    }
}
*//*
int main() {
    int arr[10][3],i,j;
    int eng=0,utab=0,rgl=0;
    for(i=0;i<10;i++) {
        printf("Enter data of respondent %d:\n\n",i+1);
        for(j=0;j<3;j++) {
            if(j==0){
                printf("Economic Status:\n\n");
                printf("0: Upper class\t1: Middle class\t2: Lower class\n\n");
                scanf("%d",&arr[i][j]);
            }
            if(j==1){
                printf("\n\nLanguage Preferred:\n\n");
                printf("3: English\t4: Hindi\t5:Regional Language\n\n");
                scanf("%d",&arr[i][j]);
            }
            if(j==2){
                printf("\n\nType of Paper:\n\n");
                printf("6: Daily\t7: Supplement\t8: Tabloid\n\n");
                scanf("%d",&arr[i][j]);
            }
        }
    }
   
    // converting the whole array using left shift
        for(i=0;i<10;i++) {
        for(j=0;j<3;j++) {
            arr[i][j]= 1 << arr[i][j];  // conversion
            showbits(arr[i][j]);
        }
    }
    
    for(i=0;i<10;i++) {
        if(arr[i][1]==8)// english readers
            eng++;
    
        if(arr[i][0]==1 && arr[i][2]==256)  // upper class,tabloid readers
            utab++;
        
        if(arr[i][1]==32) // regional language readers
            rgl++;
    }
    printf("Reader's statistics:\n\n\n\n");
    printf("\tEnglish Reader: %d\n",eng);
    printf("\tUpper class Tabloid Readers: %d\n",utab);
    printf("\tRegional Language readers: %d\n",rgl);
}
*//*
int main() {
    
    int game;
    int i,won=0,name;
    
    printf("Enter number: ");
    scanf("%d",&name);
    printf("\n\n");
    
    for(i=1;i<=8;i++) {
        game=i & name;
        showbits(i);
        showbits(name);
        printf("\n%d %d\n",i,name);
    
        if(game==1) {
            printf("Cricket\n");
            won++;
        }
        if(game==2) {
            printf("Basketball\n");
            won++;
        }
        if(game==3) {
            printf("Football\n");
            won++;
        }
        if(game==4) {
            printf("Hockey\n");
            won++;
        }
        if(game==5) {
            printf("Lawn-tennis\n");
            won++;
        }
        if(game==6) {
            printf("Table-tennis\n");
            won++;
        }
        if(game==7) {
            printf("Carrom\n");
            won++;
        }
        if(game==8) {
            printf("Chess\n");
            won++;
        }
    }
    if(won>=5) {
        printf("\n\n\nCollege %d has won the champions trophy\n",name);
    }
    else {
        printf("\n\n\nCollege %d didn't win the champions trophy\n",name);
    }
}*/

/*
int main() {
    
    struct animal
    {
        char name[30];
        int type;
    };
    struct animal a={"OCELOT",18};
    
    int t1,t2,typ1,typ2;

    t1= a.type >> 3;
    
    typ1= t1 & 2;     // checking the bit after shifting
    
    t2= t1 << 3;
    
    typ2= t2 & 16;      // checking another bit after shifting
    
    // checking if ocelot is canine/feline/cetacean/marsupial

    if(typ1==1)
        printf("\n\nOCELOT is Canine\n");
    
    if(typ1==2)
        printf("\n\nOCELOT is Feline\n");
    
    if(typ1==4)
        printf("\n\nOCELOT is Cetacean\n");
    
    if(typ1==8)
        printf("\n\nOCELOT is Marsupial\n");
    
    // checking if ocelot is carnivore or herbivore
  
    if(typ2!=0)
        printf("\n\nOCELOT is Carnivore\n");
    
    if(typ2==0)
        printf("\n\nOCELOT is Herbivore\n");
}*/

void timer(unsigned time, unsigned *hr, unsigned *mn, unsigned *sc);
int main() {
    
    unsigned int hr = 05, mn = 30 ,sc = 12,input;
    input=512+hr*2048+mn*32+sc;
    printf("%d ",input);
    
    timer(input,&hr,&mn,&sc);
    
    printf("\n\nTIME:   %u : %u : %u\n",*(&hr),*(&mn),*(&sc));
}

void timer(unsigned time, unsigned *hr, unsigned *mn, unsigned *sc) {
    
    
    *hr=time >> 11;
    
    *mn=(time<<21) >> 26;
    
    *sc=(time<<27) >> 27;
    
   /* unsigned int d = 9, m = 3, y = 1990, year, month, day, date ;
    date = ( y - 1980 ) * 512 + m * 32 + d ;
    printf ( "\nDate = %u", date ) ;
    year = 1980 + ( date >> 9 ) ;
    month = ( (date << 23 ) >> 28 ) ;
    day = ( (date << 27 ) >> 27 ) ;
    printf ( "\nYear = %u ", year ) ;
    printf ( "Month = %u ", month ) ;
    printf ( "Day = %u ", day ) ;*/
}

