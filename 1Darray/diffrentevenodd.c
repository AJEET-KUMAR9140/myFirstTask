#include<stdio.h>
int main(){
    int arr[6];
    printf("Enter any number : ");
    for(int i=0; i<6; i++){
        scanf("%d",&arr[i]);
    }
    int even=0;
    int odd=0;
    for(int j=0; j<6; j++){
        if(arr[j]%2==0){
            even=even+arr[j];
           
        }
        if(arr[j]%2!=0){
            odd=odd+arr[j];
        }
    }
    int different=even-odd;
    printf("the different of even and odd=%d",different);
}