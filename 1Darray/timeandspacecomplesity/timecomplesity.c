#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,3,6,7,8,9};
    int sum=0;
    int x;
    for(int i=0; i<10; i++){
       sum=sum+arr[i];
    }
    x=sum-(9*10)/2;
    printf("the dublicate number is =%d ",x);
}