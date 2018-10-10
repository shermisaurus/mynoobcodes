#include <stdio.h>
int main()
{
    int n, rev = 0, remainder;

    printf("Enter an integer to reverse.\n");
    scanf("%d", &n); //Initialization

    while(n != 0)   //Condition
    {
        remainder = n % 10;
        rev = rev*10 + remainder;
        n /= 10;    //variable increment
    }
    printf("Reversed Number is\n %d", rev);
    return 0;
}