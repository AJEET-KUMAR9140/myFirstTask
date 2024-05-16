#include<stdio.h>
#include<limits.h>
int main(){
    int arr[6];
    printf("Enter any sixth number : ");
    for(int i=0; i<6; i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    int smin=INT_MAX;
    for(int i=0; i<6; i++){
        if(min>arr[i]){
            smin=arr[i];

        }
    }printf("%d",smin);
}