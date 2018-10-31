//https://www.spoj.com/problems/CPTTRN1/

/*
Input:
3
3 1
4 4
2 5

Output:
*
.
*

*.*.
.*.*
*.*.
.*.*

*.*.*
.*.*.

*/

#include<stdio.h>
#include<iostream>

using namespace std;

int main()

{
    int t, l, c, i, j;
    scanf("%d",&t);
    while(t--)
    {   
    scanf("%d %d",&l, &c);

        for(i=0; i<l; i++)
        {
        for(j=0; j<c; j++)
        {
            if((i+j)%2 == 0 )
                printf("*");
            else
                printf(".");
        }
        printf("\n");  
        
        }
    }
return 0;
}


