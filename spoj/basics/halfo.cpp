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

int main()
{
int n,k,i=0;
cin >> n;
    while(n--)
    {
    string s;
    cin >> s;
    k=s.length()/2;


        while(i<k)
            {
            cout << s[i];
            i=i+2;
            }
    cout << endl;
    i=0;
    }
}

