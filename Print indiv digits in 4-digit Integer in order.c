#include <stdio.h>
#include <stdlib.h>
/*
Programmer: Charles Jayson M. Macan
Project Description: "Write a program that prompts the user to input a
four-digit positive integer. The program then outputs the digits of
the number, one digit per line."
Date: Sept 24, 2022
*/
int main()
{
    int num, temp1,temp2,temp3, temp0=0; //Declare local variables

    printf("Enter a four-digit positive integer:\n"); //Prompt user to input a four-digit positive integer
    scanf("%d",&num);
    printf("\n");

    temp0=num/1000;
    /*Since it is a four digit integer, using modulo operator
    is unnecessary. Note that when you divide directly, the final answer will
    only be the integer. The remainder will be neglected. */
    printf("%d\n", temp0); //Display result of num/1000
    temp1= num % 1000/100;
    /*Modulo operator divides the given value then gives the remainder as the final result.
    For this, we get the remainder of num (it becomes an integer already, not a decimal)
    then divide it by 100 to get the 2nd number of the input value.*/
    printf("%d\n",temp1);
    temp2=num%100/10;
    printf("%d\n",temp2);
    temp3=num % 10;
    printf("%d\n", temp3); //Displays the 4th number

    return 0; //Termination of the program
}
