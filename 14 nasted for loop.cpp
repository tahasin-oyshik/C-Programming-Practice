/*
   By using nested loops, print this pattern:
   54321
   4321
   321
   21
   1
*/
#include <stdio.h>

int main()
{
    int i, j;

    // Outer loop for the number of rows (starts from 5 and decreases)
    for (i = 5; i > 0; i--)
    {

        // Inner loop to print numbers in decreasing order from the current value of 'i' down to 1
        for (j = i; j > 0; j--)
        {
            printf("%d", j); // Print the current value of 'j'
        }

        printf("\n"); // Move to the next line after finishing the inner loop
    }

    return 0; // End of the program
}
