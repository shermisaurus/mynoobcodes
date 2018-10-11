//ASCII Table: https://codeforwin.org/2015/05/ascii-codes.html
#include <stdio.h>

int main()
{
    int i;
    i = 97;
    printf("Alphabets from a - z are: \n");
   
    while(i<=122)
    {
        printf("%c\n", i);
        i++;
    }

    return 0;
}

//If you want to print alphabets in uppercase using ASCII values. You can use ASCII value of A = 65 and Z = 90.