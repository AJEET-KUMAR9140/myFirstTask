#include<stdio.h>
int main(){
    int arr[5];
    int brr[5];
    printf("Enter the value : ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<5; j++){
        brr[j]=arr[j];
        printf("%d ",brr[j]);
    }printf("\n");

}