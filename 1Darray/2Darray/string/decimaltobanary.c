#include<stdio.h>
int main(){
    int j=1,dec=0,d,nsave,rem,n;
   printf("Enter any binary number : ");
   scanf("%d",&n);
   nsave=n;
   while (n>0)
   {
    rem=n%10;
    d=rem*j; 
    dec=dec+d;
    j=j*2;
    n=n/10;
   }
   printf("The binary number is = %d\n and decimal is = %d",nsave,dec);
   

}