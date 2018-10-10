//Program to check whether a number is even or odd

#include <stdio.h>
void main()
{   int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    n%2 == 0 ? printf("The number %d is even\n", n) : printf("The number %d is odd\n", n);

}
