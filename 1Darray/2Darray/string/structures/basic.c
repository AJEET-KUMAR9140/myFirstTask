#include<stdio.h>
#include<string.h>
int main(){
       typedef struct student{
        int rollnumber;
        int number;
        char name[20];
        float precent;
    } student;
            student A;
           A.rollnumber=36;
           A.number=10;
           A.precent=29;
           strcpy(A.name,"ashutosh");

            student B;
           B.rollnumber=62;
           B.number=35;
           B.precent=49;
           strcpy(B.name,"kartikey singh");
           printf("%d\n",A.rollnumber);
           printf("%d\n",A.number);
           printf("%.2f\n",A.precent);
           printf("%s\n",A.name);
           printf("%d\n",B.rollnumber);
           printf("%d\n",B.number);
           printf("%f\n",B.precent);
          printf("%s\n",B.name);
           return 0;
           
}