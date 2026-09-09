/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/

#include<stdio.h>
int main()
{
    float a,b,sum,difference,product,quotient;
    printf("Enter two numbers:");
    scanf("%f,%f",&a,&b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a/b;
    printf("Sum = %2.f\n",sum);
    printf("Difference = %2.f\n",difference);
    printf("Product = %2.f\n",product);
    printf("Quotient = %f\n",quotient);
    return 0;
}