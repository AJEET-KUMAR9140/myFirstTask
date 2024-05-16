#include<stdio.h>
#include<limits.h>
int main(){
    int arr[9];
    printf("Enter any nine value : ");
    for(int i=0; i<9; i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0; i<9; i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
    }printf(" The second number is =%d",smax);
}