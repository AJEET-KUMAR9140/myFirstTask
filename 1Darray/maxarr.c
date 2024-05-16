#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5];
     printf("Enter any five number : ");
     for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
     }
    int min=INT_MAX;
    int max=INT_MIN;
     for(int j=0; j<5; j++){
        if(min>arr[j]){
            min=arr[j];
        }
        if(max<arr[j]){
            max=arr[j];
        }
        
     }printf(" the min vallue is %d and max is %d",min,max);
}