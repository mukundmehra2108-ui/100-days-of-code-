/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.*/

#include<stdio.h>
int main()
{
   float c,fahrenheit;
    printf("Celcius:");
    scanf("%f",&c);
    printf("Converting celcius to Fahrenheit\n");
    fahrenheit = (c*2)+30;
    printf("Fahrenheit = %f",fahrenheit);
    return 0;
}