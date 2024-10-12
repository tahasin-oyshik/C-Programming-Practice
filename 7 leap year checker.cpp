/*
Write a C program that takes a year as input and checks if it is a leap year or not.
(A year is a leap year if it is divisible by 4 but not by 100, unless it's also divisible by 400).
*/
#include <stdio.h>
int main ()
{
    int year;

    printf("enter the year name : ");
    scanf("%d", & year);

    if (year<0)
    {
        printf ("%d is a invalid year",year);
    }
    else if (year%400==0)
    {
        printf ("%d is a leap year",year);
    }
    else if (year%400!=0 && year%100==0)
    {
        printf ("%d isn't a leap year",year);
    }
    else if (year%400!=0 && year%100!=0 && year%4==0)
    {
        printf ("%d is a leap year",year);
    }
    else
    {
        printf ("%d isn't a leap year",year);
    }




    return 0;
}
