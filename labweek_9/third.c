//Program to find whether a given number is positive or negative

#include <stdio.h>
void main()
{
    int n;
    printf("Enter no.\n");
    scanf("%d", &n);
    n >= 0 ? printf("The no %d is postive\n", n) : printf("The no %d is negative", n);
}