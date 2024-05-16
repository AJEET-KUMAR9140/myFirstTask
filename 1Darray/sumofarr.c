#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter any number : ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0; j<5; j++){
         sum=sum+arr[j];
    } printf("the number sum is %d",sum);
}