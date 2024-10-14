/*
By usuig nasted loop print this:
01234
1234
234
34
4
*/
#include <stdio.h>
int main ()
{
    int i,j;

    for (i=0; i<5; i++)
    {

        for (j=i; j<5; j++)
        {
            printf ("%d", j);
        }
        printf ("\n");

    }


    return 0;
}
