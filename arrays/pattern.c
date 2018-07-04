/*
Print the stars in a diamond fashion.
The integer will be given as an input. If the input is 4, then the output should be * *** ***** ******* ***** *** *

Test case
Input (stdin)

4

Expected Output (stdout)

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main()
{
    int i, j, rows;


    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    { 
        /* Print leading spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print star */
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }
	for(i=rows-1; i>=1; i--)
    { 
        /* Print leading spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print star */
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }
    return 0;
}
