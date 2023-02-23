#include <stdio.h>
#include <math.h>

void readInt(int *address){
    int readCheck = 0;
    readCheck = scanf("%d",address);
    while(readCheck!=1){
            printf("Input should be an integer... Enter Again\n");
            scanf("%*[^\n]");
            readCheck = scanf("%d",address);
    }
}

int main(){
    int num1, num2, choice;
    char repeat;
    do{
        //give choices
        puts("\nChoose the operation you want to perform");
        puts("\n  1. Addition\n  2. Subtraction\n  3. Multiplication\n  4. Division\n  5. AND\n  6. OR\n  7. XOR\n  8. Left Shifting\n  9. Right Shifting\n");
        readInt(&choice);

        while(choice>9 || choice<0){
            puts("Choice is not in the list... Please choose the operator again");
            readInt(&choice);
            
        }

        // while(readCheck!=1){
        //     printf("Operation should be an integer");
        //     scanf("%*[^\n]");
        //     printf("Enter again");
        //     readCheck = scanf("%d",&choice);
        // }

        //take input
        printf("\nGive the first number:");
        readInt(&num1);
        printf("Give the second number:");
        readInt(&num2);

        switch (choice)
        {
        case 1:
            //Add
            puts("You have choosed Addition operation");

            //Perform calculatons
            puts("\nThe result is:\n");
            printf("%d + %d = %d",num1,num2,(num1+num2));
            break;
        case 2:
            //subtract
            puts("You have choosed subtraction operation");

            //Perform calculatons
            puts("\nThe result is:\n");
            printf("%d - %d = %d",num1,num2,(num1 - num2));
            break;

        case 3:
            //multiply
            puts("You have choosed multiplication operation");

            //Perform calculatons
            puts("\nThe result is:\n");
            printf("%d * %d = %ld",num1,num2,(num1 * num2));
            break;
        case 4:
            //divide
            puts("You have choosed division operation");

            //Perform calculatons
            if(num2 == 0){
                puts("You can not divide a number by 0");
                break;
            }

            puts("\nThe result is:\n");
            printf("%d / %d = %f",num1,num2,((float)num1 / num2));
            break;
        case 5:
            //AND
            puts("You have choosed AND operation");

            //Perform calculatons
            puts("\nThe result is:\n");
            printf("%d & %d = %d",num1,num2,(num1 & num2));
            break;
        case 6:
            //OR
            puts("You have choosed OR operation");

            //Perform calculatons
            puts("\nThe result is:\n");
            printf("%d | %d = %d",num1,num2,(num1 | num2));
            break;
        case 7:
            //XOR
            puts("You have choosed XOR operation");;

            //Perform calculatons
            puts("\nThe result is:\n");
            printf("%d ^ %d = %d",num1,num2,(num1 ^ num2));
            break;
        case 8:
            //Left shift
            puts("You have choosed Left Shift operation");

            //shifts should be +ve
            if(num2<0){
                puts("Number of shifts should be positive... Else choose the right shift operation");
                break;
            }

            //Perform calculatons
            puts("\nThe result is:\n");
            printf("%d << %d = %d",num1,num2,(num1 << num2));
            break;
        case 9:
            //right Shift
            puts("You have choosed Right Shift operation");
            
           //shifts should be +ve
            if(num2<0){
                puts("Number of shifts should be positive... Else choose the left shift operation");
                break;
            }

            //Perform calculatons
            puts("\nThe result is:\n");
            printf("%d >> %d = %d",num1,num2,(num1 >> num2));
            break;
        default:
            puts("You entered an invalid operation choice");
            break;
        }

        printf("\nDo you want to perform another calculation(y/n):");
        scanf(" %c",&repeat); // space%c space is important otherwise the null character will be taken as input

    }while(repeat == 'y');

    puts("\nYou are out of the program");
    return 0;
}