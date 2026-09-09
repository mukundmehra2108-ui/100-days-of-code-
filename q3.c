/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include<stdio.h>
int main()
{
    float l,b,perimeter,area;
    printf("Length:");
    scanf("%f",&l);
    printf("Breadth:");
    scanf("%f",&b);
    perimeter = 2*(l+b);
    area = l*b;
    printf("Perimeter = %f\n",perimeter);
    printf("Area = %f\n",area);
    return 0;
}
