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

    for (i=1; i<8; i++)
    {

        for (j=2; j<6; j++)
        {
            printf("%d", j);
        }
        printf ("\n");

    }

    return 0;
}
