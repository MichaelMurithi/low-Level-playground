/* A program that accepts the radius of a circle and calculates its area*/

#include <stdio.h>

int main()
{
    float radius;
    float area;

    printf("Enter the radius of the Circle: ");
    scanf("%f",&radius);

    area = (22/7) * radius * radius;
    printf("The area of the circle of radius %f is: %f",radius, area);

    return 0;
}
