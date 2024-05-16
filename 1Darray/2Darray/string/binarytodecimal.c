#include<stdio.h>
int main(){
    int n,i,j,b[32];
    printf("Enter dicimal number : ");
    scanf("%d",&n);
    for(i=0; n>0; i++){
        b[i]=n%2;
        n=n/2;
    }
    for(j=i-1; j>=n; j--){
        printf("%d",b[j]);
    }
    return 0;
}