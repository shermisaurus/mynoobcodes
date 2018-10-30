/*
Input:
4
your 
progress 
is 
noticeable

Output:
y
po
i
ntc
*/

#include <iostream>
#include <string.h>
using namespace std;
void halfofhalf(char a[100][100])
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<strlen(a[i])/2; j+=2)
        cout<<a[j][i];
        cout<<"\n";

    }

}
int main()

{
    int t=4;
    char array1[100][100]={"your","progress","is","noticeable"};
    halfofhalf(array1);
    return 0;

}
