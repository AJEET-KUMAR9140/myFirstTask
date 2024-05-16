#include<stdio.h>
#include<string.h>
int main(){
    // FILE* ptr=fopen("file.txt","r");
    // char str[200];
    // while(fgets(str,200,ptr)!=NULL)
    // printf("%s",str);
    FILE *fileptr;
    fileptr=fopen("aje.txt","w");
    char str[50]="Hello world \n  replaced";
    fputs(str,fileptr);
    fclose(fileptr);
    return 0;
}