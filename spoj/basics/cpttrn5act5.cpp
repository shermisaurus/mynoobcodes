#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int l, c, s;
    cin >> l >> c >> s;
    int breadth = (c * (s + 1)) + 1;
    int height = (l * (s + 1)) + 1;
    for(int i = 0; i < height; i++)
    {
      for(int j = 0; j < breadth; j++)
      {
        if(i % (s+1) == 0 || j % (s+1) == 0)
        {
          cout << "*";
        }
        else if((i/(s+1) + j/(s+1)) % 2 == 0)
        {
          if(i % (s+1) == j % (s+1))
          {
            cout << "\\";
          }
          else
          {
             cout << ".";
          }
        }
        else
        {
          if(i % (s+1) == (s+1) - (j % (s+1)))
          {
            cout <<"/";
          }
          else
          {
            cout << ".";
          }
        }
      }
      cout << "\n";
    }
    cout << "\n";
   }
}