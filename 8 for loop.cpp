/*
Loop odd or even
*/
#include <stdio.h>
int main ()
{
    int i;

    for(i=1;i<101;i++)
    {
       // printf("%d\n", i);

        if (i%2==0)
        {
            printf ("%d is a even number\n",i);
        }
        else
        {
            printf ("%d is a odd number\n",i);
        }


    }




    return 0;
}
