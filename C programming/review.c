#include<stdio.h>
#include<string.h>
int main(){
    int a,b;//DECLARATION OF VARIABLES
    //LOOP FOR PRINT SMILE EMOJI
    for(int i=0;i<10;i++){
        printf("%c",1);
    }
    printf("\n\n");//FOR SKIP LINES
    printf("OPERATION AVALABLE IN THIS PROGRAM: ADDITION, SUBTRACTION, MULTIPLICATION,DIVISION,ANDING, ORING, XORING, LEFTSHIFT, RIGHTSHIFT\n\n");
    char operation[15],add[]="ADDITION",sub[]="SUBTRACTION",mul[]="MULTIPLICATION",div[]="DIVISION",and[]="ANDING",or[]="ORING",xor[]="XORING",lshift[]="LEFTSHIFT",rshift[]="RIGHTSHIFT";
    while(1){
        printf("Enter operation(USE UPPERCASE LETTERS ONLY): ");
        scanf("%s",operation);//TAKE OPERATION INPUT FROM USER
        printf("Enter first number:");
        scanf("%d",&a);//TAKE FIRST NUMBER INPUT FROM USER
        printf("Enter second number:");
        scanf("%d",&b);//TAKE SECOND NUMBER INPUT FROM USER
        if(!strcmp(operation,add)){
            printf("Result is %d.\n",a+b);
        }
        else if(!strcmp(operation,sub)){
            printf("Result is %d.\n",a-b);
        }
        else if(!strcmp(operation,mul)){
            printf("Result is %d.\n",a*b);
        }
        else if(!strcmp(operation,div)){
            printf("Result is %d.\n",a/b);
        }
        else if(!strcmp(operation,and)){
            printf("Result is %d.\n",a&b);
        }
        else if(!strcmp(operation,or)){
            printf("Result is %d.\n",a|b);
        }
        else if(!strcmp(operation,xor)){
            printf("Result is %d.\n",a^b);
        }
        else if(!strcmp(operation,lshift)){
            printf("Result is %d.\n",a<<b);
        }
        else if(!strcmp(operation,rshift)){
            printf("Result is %d.\n",a>>b);
        }
        else{
            printf("INVALID OPERATION.\n");
        }
    }
    return 0;
}
