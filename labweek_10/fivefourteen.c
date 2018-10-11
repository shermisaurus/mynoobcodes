//C program to count frequency of digits in a given number
#include<stdio.h>
#define BASE 10
int main()
{
    long long num, n;
    int i, ld;
    int freq[BASE];

    printf("Input the number: \n");
    scanf("%lld", &num);

    for(i=0;i<BASE;i++)
    {
       freq[i]=0; 
    }
    
    n = num;
    while(n != 0)
    {
        ld = n%10;
        n /= 10;
        freq[ld]++;
    }
    for(i=0;i<BASE;i++)
    {
        printf("Frequency of the digit %d = %d \n",i ,freq[i]);
    }
    return 0;
}