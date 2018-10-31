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
void halfofhalf(char a[100][100],int t)
{
    for (int i=0; i<t; i++)
    {
        cout<<a[i][0];
        for (int j=1; j<strlen(a[i])/2; j+=2)
        cout<<a[i][j];
        cout<<"\n";

    }

}
int main()

{
    int t;
    char array1[100][100];
    while(t<=100 && t>1)
    cin>>t;

    for(int i=0;i<t;i++)
        cin>>array1[i];

    halfofhalf(array1,t);
    return 0;

}
