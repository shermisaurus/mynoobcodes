//C program to find reverse of a number
#include<stdio.h>
int main()
{
    int num, rev = 0;
    printf("Enter the number to reverse: \n");
    scanf("%d", &num);
    while(num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    printf("The reversed number is: %d \n", rev);
    return 0;
}