/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
int main()
{
    int s,mins,hours,seconds;
    printf("number of seconds: ");
    scanf("%d",&s);
    hours = s/3600;
    mins = (s%3600)/60;
    seconds = s%60;
    printf("%d,%d,%d",hours,mins,seconds);
    return 0;
}
