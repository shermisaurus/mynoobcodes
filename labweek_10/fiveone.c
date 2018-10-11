//C program to print natural numbers in reverse from n to 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, temp;
    printf("Input the value of range:\n");
    scanf("%d", &temp);
    system("clear");
    printf("The natural mumbers are:\n");
    for(n=temp; n>=1; n--)
    {
        printf("%d\n", n);
    }
return 0;
}