/*
Get subject wise number input from user then calculate the grade for it.
*/
#include <stdio.h>
int main ()
{

    int mark,bangla,chemistry,physics;

    printf("Enter the number for bangla :");
    scanf("%d", &bangla);
    printf("Enter the number for chemestry :");
    scanf("%d", &chemistry);
    printf("Enter the number for physics :");
    scanf("%d", &physics);

    mark=(bangla+chemistry+physics)/3;


    if (mark>=0 && mark<=32)
    {
        printf ("your mark is %d and for that grade is fail.",mark);
    }
    else if (mark>=32 && mark<=39)
    {
        printf ("your mark is %d and for that grade is C-",mark);
    }
    else if (mark>=40 && mark<=49)
    {
        printf ("your mark is %d and for that grade is C",mark);
    }
    else if (mark>=50 && mark<=59)
    {
        printf ("your mark is %d and for that grade is B-",mark);
    }
    else if (mark>=60 && mark<=69)
    {
        printf ("your mark is %d and for that grade is B",mark);
    }
    else if (mark>=70 && mark<=79)
    {
        printf ("your mark is %d and for that grade is A-",mark);
    }
     else if (mark>=80 && mark<=100)
    {
        printf ("your mark is %d and for that grade is A",mark);
    }
    else
    {
        printf ("Thats a invalid mark");
    }


    return 0;
}
