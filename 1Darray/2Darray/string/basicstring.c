#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("pleas whrite your text : ");
    gets(str);
    puts("My text was :");
    int size=0; 
    int  k=0; 
    while(str[k]!='\0'){
        
        size++;
        k++;
            }
    for(int i=0,j=size-1;i<=j;i++,j--){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    }
    printf("%s",str);
    return 0;
}
