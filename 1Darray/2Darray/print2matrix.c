#include<stdio.h>
int main()
{
    int arr[3][3];
    int brr[3][3];
    int add[3][3];
    printf("Enter 3*3 matrix for arr: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
      printf("Enter 3*3 matrix for brr: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&brr[i][j]);
        }
    } 
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d ",arr[i][j]);
            } printf("\n");
        }
        printf("\n");
         for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d ",brr[i][j]);
            } printf("\n");
        }
        
        printf("\n");
          for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
              add[i][j]=arr[i][j]+brr[i][j];
              printf("%d ",add[i][j]);
            } printf("\n");
        } 
    

}