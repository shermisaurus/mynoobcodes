#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    printf("Enter rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
         for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=rows; j++)
        {
            printf("*");
        }
        /* Print trailing spaces */
       

        /* Print stars after spaces */
        

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}