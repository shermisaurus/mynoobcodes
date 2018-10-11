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

/*#include <stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
*/
//https://brilliant.org/wiki/finding-digits-of-a-number/
//Comes out that declaring datatype int to a decimal value is same as putting GIF or flooR VLue function as the article concludes.