#include <stdio.h>;
#include <stdbool.h>;

int main()
{
    int num;
    printf("Enter the number to check: ");
    scanf("%d",&num);
    printf("The number is %s",(num%2 == 0) ? "Even" : "Odd");

    return 0;
}
