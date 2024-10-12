/*
Write a C program that takes a number as input and checks if the number is odd or even
*/
#include <stdio.h>
int main ()
{

    int input;

    printf("enter the number= ");
    scanf("%d", &input);

    if (input%2==0)
    {
        printf("%d is a even number",input);
    }
    else
    {
        printf("%d is a odd number",input);
    }


    return 0;
}
