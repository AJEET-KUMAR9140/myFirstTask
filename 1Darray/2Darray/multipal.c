#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int crr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            crr[i][j]=0;
            for(int k=0; k<3; k++){
                crr[i][j]=crr[i][j]+arr[i][k]*brr[k][j];
            }printf("%d ",crr[i][j]);
        } printf("\n");
    }
}