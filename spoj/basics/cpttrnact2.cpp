/*Input:
3
3 1
4 4
2 5

Output:
*
*
*

****
*..*
*..*
****


*****
*****
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int t, l, c, i, j, n;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d %d",&l, &c);
   
            for(i=0; i<l; i++)
            {
            for(j=0; j<c; j++)
                {
                    if(i==0 || j==0 || i==l-1 || j==c-1)                  
                        printf("*");
                    else
                        printf(".");
                }
                printf("\n");  
            
            }  
    }
return 0;
}

