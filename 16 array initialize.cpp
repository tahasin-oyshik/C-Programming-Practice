/*

*/
#include <stdio.h>
int main ()
{
    int i,array[50];

    for(i=0;i<10;i++)
    {
        printf("Please give the input for array[%d]",i);
        scanf("%d",&array[i]);
        printf("The element in array[%d] is %d \n",i,array[i]);
    }

/*    for(i=0;i<10;i++)
    {
        printf("The element in array[%d] is %d \n",i,array[i]);
    }
*/

    return 0;
}
