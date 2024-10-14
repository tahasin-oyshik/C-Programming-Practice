/*
By usuig nasted loop print this:
2345
2345
2345
2345
2345
*/
#include <stdio.h>
int main ()
{
    int i,j;

    for (i=2; i<6; i++)
    {

        for (j=2; j<8; j++)
        {
            printf("%d", j);
        }
        printf ("\n");

    }

    return 0;
}
