#include<stdio.h>
#include<limits.h>
int main(){
int arr[7]={0,6,5,3,2,2,7};
int max=INT_MIN;
int min=INT_MAX;
for(int i=0; i<7; i++){
    if(max<arr[i]){
        max=arr[i];
    }
     if(min>arr[i]){
        min=arr[i];
    }
}
printf(" max =%d and min=%d ",max,min);
return 0;
}