#include<stdio.h>
#include<string.h>
int main(){
    char str[12]="Maheshwary";
    printf("%s\n",str);
    for(int i=9; i>=3; i--){
        str[i+1]=str[i];
    }
    str[3]='a';
    printf("%s",str);
}