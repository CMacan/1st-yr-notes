#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,temp; //Declare num1, num2, and temporary value
    
    printf("Enter first number:"); //Prompt user to input first number
    scanf("%f",&num1); //Store value to the variable num1  
    printf("Enter second number:"); //Prompts the user to enter the second number
    scanf("%f",&num2);

    temp=num1; //value of first number is assigned to temp
    num1=num2; //value of first number is assigned to the second number
    num2=temp; //value of temp (initial value of first) is assigned to second 

    printf("After scanning, first number: %.2f",num1); //%.2f displays number up to 2 decimal points
    printf("After scanning, second number: %.2f",num2);
    return 0; //Termination of program
}
