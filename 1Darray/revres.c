#include<stdio.h>
int main(){
    int arr[6];
    int brr[6];
    printf("Enter any number :");
    for(int i=0; i<6; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<6; j++){
      brr[j]=arr[5-j];
      for(int j=0; j<6; j++){
        printf("%d",brr[j]);
      }
    }
    
}