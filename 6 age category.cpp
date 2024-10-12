/*
Write a C program that asks the user for their age and prints which category they belong to:

0–12: Child
18–19: Teenager
20–59: Adult
60 and above: Senior
*/
#include <stdio.h>
int main ()
{

    float age;

    printf ("enter the age number :");
    scanf ("%f", &age);

    if (age>=0 && age<=12)
    {
        printf("%f is a age number for a child",age);
    }
    else if (age>=18 && age<=19)
    {
        printf("%f is a age number for a teenager",age);
    }
    else if (age>=20 && age<=59)
    {
        printf("%f is a age number for a adult",age);
    }
    else if (age>=60)
    {
        printf("%f is a age number for a senior",age);
    }



    return 0;
}
