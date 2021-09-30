/*

*/
#include <stdio.h>;

//A problem to practice simple if..else by checking the greater numbers between 2
 check_greater_num()
 {
    int num1, num2;
    printf("\nEnter 2 numbers separated by space: ");
    scanf("%d %d",&num1, &num2);
    if(num1 == num2)
        printf("\n Oops, none is greater, they are equal.");
    else if(num1 > num2)
        printf("\n %d is greater than %d",num1, num2);
    else
        printf("\n %d is greater than %d \n",num2, num1);
    printf("\n........................................\n");
 }

 int main(){
    check_greater_num();
 }
