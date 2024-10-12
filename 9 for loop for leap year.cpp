/*
Print all the years from 2000 to 2025 with leap year staus:
Example:2000 is a leap year.
        2001 isn't a leap year.
        2002 is a leap year.
*/
#include <stdio.h>
int main ()
{
    int i;

    for (i=2000; i<2026; i++)
    {
        if (i%400==0)
        {
            printf ("%d is a leap year\n",i);
        }
        else if (i%100==0 && i%400!=0)
        {
            printf ("%d isn't a leap year\n",i);
        }
        else if (i%400!=0 && i%100!=0 && i%4==0)
        {
            printf ("%d is a leap year\n",i);
        }
        else
        {
            printf ("%d isn't a leap year\n",i);

        }
    }
    return 0;
}
