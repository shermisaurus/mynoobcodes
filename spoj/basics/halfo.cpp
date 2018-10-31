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
    while(n--) //https://www.dropbox.com/s/9aag31e8xndi6n1/Screenshot%20from%202018-10-30%2018-10-11.png?dl=0
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

