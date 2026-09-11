/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.*/

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
int main()
{
    float principal,rate,time,n,si;
    double ci,A;
    printf("principal,rate,time,compounding frequency:");
    scanf("%f,%f,%f,%f",&principal,&rate,&time,&n);
    si = (principal*rate*time)/100;
    #include <math.h>
    A = principal*pow((1+rate/(n*100)), n*time);
    ci = A - principal;
    printf("Simple Interest = %2.f\n",si);
    printf("Compound Interest = %f",ci);

    return 0;
}

