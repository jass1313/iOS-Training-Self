//
//  main.c
//  Low Level File input output
//
//  Created by KiwiTech on 09/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.

#include <stdlib.h>
#include <string.h>

// Low level Disk input output File-copy program which copies text, .com and .exe files
#include <stdio.h>
//#include "types.h" // if present in sys directory use "c:tc\\include\\sys\\types.h"
// #include "stat.h" // if present in sys directory use "c:\\tc\\include\\sys\\stat.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/fcntl.h>
#include <unistd.h>

#ifndef O_BINARY
#define O_BINARY  0
#define O_TEXT    0
#endif

/*int main ()
{
    char buffer[ 512 ], source [ 128 ], target [ 128 ] ;
    int inhandle, outhandle, bytes ;
    
    printf ( "\nEnter source file name" ) ;
    gets ( source ) ;
    inhandle = open ( source, O_RDONLY | O_BINARY ) ;
    if ( inhandle == -1 )
    {
        puts ( "Cannot open file" ) ;
        exit(1) ;
    }
    printf ( "\nEnter target file name\n" ) ;
    gets ( target ) ;
    outhandle = open ( target, O_CREAT | O_BINARY | O_WRONLY,S_IWRITE ) ;
    if ( inhandle == -1 )
    {
        puts ( "Cannot open file" ) ;
        close ( inhandle ) ;
        exit(1) ;
    }
    
    while ( 1 )
    {
        bytes = read ( inhandle, buffer, 512 ) ;
        if ( bytes > 0 )
            write ( outhandle, buffer, bytes ) ;
        else
            break ;
    }
    close ( inhandle ) ;
    close ( outhandle ) ;
}*/
/*
int main ()
{
    char buffer[100],sourceFile[20],targetFile[20];
    int inhandle, outhandle,bytes;
    
    printf("\nEnter the source file\n");
    gets(sourceFile);
    inhandle=open(sourceFile, O_RDONLY|O_BINARY);
    if(inhandle==-1){
        printf("file Cannot open");
        exit(1);
    }
    printf("\nEnter the target file\n");
    gets(targetFile);
    outhandle=open(targetFile, O_CREAT|O_BINARY|O_RDWR,S_IWRITE);
    if(outhandle==-1){
        printf("file Cannot open");
        close(inhandle);
        exit(1);
    }
    
    while (bytes=read(inhandle, buffer, 100)>0) {
        write(outhandle, buffer, bytes);
    }
    close(inhandle);
    close(outhandle);
}*/
/*
int main ()
{
    char buffer[100];
    int in,out,bytes;
    
    in=open("main.c", O_RDONLY|O_BINARY);
    if(in==-1){
        printf("file Cannot open");
        exit(1);
    }
    out=open("main2.c", O_CREAT|O_BINARY|O_RDWR,S_IWRITE);
    if(out==-1){
        printf("file Cannot open");
        close(in);
        exit(1);
    }
    while ((bytes=read(in, buffer, 100))) {
          write(out, buffer, bytes);
    }
    close(in);
    close(out);
}*/


/*
 // open and close a file
int main()
{
    char filename[]="main.c";
    int filedes, close_err;
    //open the file , filename for writing or create It if it does not exist
    filedes=open(filename , O_WRONLY | O_CREAT , 0);
    if(filedes==-1){
        printf("The file cannot be opened\n");
    } else {
        close_err=close(filedes);
        if(close_err==-1) {
            printf("The file cannot be closed\n");
        }
    }
    return 0;
}
*/


/*
  //write to a file
int main(){
    char str_write[]="Krishna Rajput singh";
    char filename []="main.c";
    int filedes;
    filedes=open(filename,O_WRONLY | O_CREAT | O_TRUNC,0);
    write(filedes,(char *)str_write,30);
    close(filedes);
    return 0;
}*/
/*
//read from a file
int main()
{
    char str_read[100];
    char filename[]="main.c";
    int filedes;
    filedes=open (filename,O_RDONLY,0);
    read(filedes,(char *)str_read,30);
    str_read[30]='\0';
    printf("the string is=%s.\n",str_read);
    close(filedes);
    return 0;
}*/
/*
int main()
{
    char str_write[]="abcdef";
    int str_read[10];
    char filename[]="main.c";
    int filedes;
    //open the file, Truncate if it exists.
    filedes=open(filename, O_RDWR | O_CREAT | O_TRUNC,0);
    //write 5 bytes of data
    write (filedes, (char *)str_write,5);
    //seek the beginning of the file
    lseek(filedes,(long) str_read,5);
    //Terminate the data we have read with a null character
    str_read[5]='\0';
    printf("The string is = %s.\n",str_read);
    close(filedes);
    return 0;
}
*/
/*
// user input data write to a file
int main(){
    char str_write[30];
    char filename[]="main2.c";
    int fp;
    printf("enter the data\n");
    scanf("%[^\n]s",str_write);
    fp=open(filename, O_WRONLY|O_CREAT|O_BINARY,S_IRUSR|S_IWUSR);
    lseek(fp,(long) 0,2);
    write(fp, (char*)str_write, 30);
    close(fp);
}*/
/*
int main(){
    char str_read[100];
    char filename[]="main.c";
    int fp;
    fp=open(filename, O_RDONLY,0);
    read(fp, (char*)str_read, 30);
    printf("%s",str_read);
    close(fp);
}*/

// user input data write to a file
int main(){
    char buffer_read[100];
    int fp;
    printf("enter the data");
    gets(buffer_read);
    fp=open("main.c",O_CREAT|O_WRONLY|O_BINARY,S_IRUSR|S_IWUSR);
    lseek(fp, (long)0, 2);
    write(fp, (char*)buffer_read, 30);

    close(fp);
}


