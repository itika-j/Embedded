#include<stdio.h>

int main(){
    int readCheck = 0;
    int num1,num2;
    readCheck = scanf("%d",&num1);
    
    while(readCheck!=1){
        printf("Operation should be an integer");
        scanf("%*[^\n]");
        printf("\nEnter again\n");
        readCheck = scanf("%d",&num1);
    }
    
    printf("readCheck is %d\n",readCheck);

    printf("num is %d\n",num1);
    readCheck=0;
    readCheck = scanf("%d",&num1);
    while(readCheck!=1){
        printf("Operation should be an integer");
        scanf("%*[^\n]");
        printf("\nEnter again\n");
        readCheck = scanf("%d",&num2);
    }
    printf("num is %d",num2);
}