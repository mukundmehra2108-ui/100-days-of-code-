/*Q6: Write a program to swap two numbers using a third variable.*/

#include<stdio.h>
int main()
{
   int a,b,swap;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    swap = b,a;
    printf("SWAP = %d",swap);
    return 0;
}