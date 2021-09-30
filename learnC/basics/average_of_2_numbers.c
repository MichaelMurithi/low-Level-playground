/* A program to calculate the average of 2 numbers entered by a user
I/O Concepts:
- scanf for user input
- printf for user output
- Arithmetic operators
- Variable declaration
Tutorial ref link: https://www.programiz.com/c-programming/c-input-output
*/

#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;
    float average;

    printf("*** Welcome, we are gonna get some average for you ****\n");

    printf("Enter the First and Second Number: ");
    scanf("%d%d", &firstNumber, &secondNumber);

    average = (secondNumber + firstNumber) / 2;
    printf("The average of %d and %d is = %f" ,firstNumber,secondNumber,average);

    printf("\n *** Thank you, Bye bye ...***");
    return 0;
}
