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

//Clearing output screen in C lamguage
//https://www.includehelp.com/c-programming-questions/how-to-clear-output-screen-in-c.aspx
//Thanks me later,Sherminator69's.