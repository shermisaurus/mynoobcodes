//program to swap first and last digit of a number
#include<stdio.h>
#include<math.h>
int main()
{
    int num, swap;
    int firstd, lastd, d ;
    printf("Input the integer n:\n");
    scanf("%d", &num);
    lastd = num % 10;
    d = (int) log10(num);
    firstd = (int) num / pow(10,d);

    swap = lastd;
    swap *= (int)pow(10,d);
    swap += num% (int)pow(10,d);
    swap -= lastd;
    swap += firstd;
    printf("The number input was %d \n", num);
    printf("The number swapped is %d \n",swap);
    return 0;
  
}

/*
Logic to swap first and last digit of a number
Begin:
    read(num)
    lastDigit ← num % 10;
    digits ← log10(num);
    firstDigit ← num / pow(10, digits);
    
    swappedNum ← lastDigit * pow(10, digits);
    swappedNum ← swappedNum + num % pow(10, digits);
    swappedNum ← swappedNum - lastDigit;
    swappedNum ← swappedNum + firstDigit;
End
*/
//cd "/home/sherminator69/Documents/cppcodes/mynoobcodes/labweek_10/" && gcc fiveten.c -o -lm fiveten && "/home/sherminator69/Documents/cppcodes/mynoobcodes/labweek_10/"fiveten
//gcc -Wall -Wextra -g fiveten.c -lm -o fiveten