/*
By usuig nasted loop print this:
*****
*****
*****
*****
*****
*/
#include <stdio.h>
int main ()
{
    int i,j;

    for (i=1; i<6; i++)
    {

        for (j=1; j<6; j++)
        {
            printf("*");
        }
        printf ("\n");

    }

    return 0;
}
