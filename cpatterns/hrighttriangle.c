//Logic to print a hollow right triangle is almost similar to right triangle star pattern logic. Just with this pattern you need to print stars only for first and last column or row.

#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        { 
            if(j==1 || j==i || i==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

//Updated



