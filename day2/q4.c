/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/

#include <stdio.h>
float pi = 3.14;
int main()
{
    float r,area,circumference;
    printf("Enter radius:");
    scanf("%f",&r);
    circumference = 2*pi*r;
    area = pi*(r*r);
    printf("Circumference = %f\n",circumference);
    printf("Area = %f\n",area);
    return 0;
}
