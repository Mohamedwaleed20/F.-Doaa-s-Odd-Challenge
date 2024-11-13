#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int s = 0 ;
    for(int i = 1 ; i<=n ;i++)
    {
      int x = i ;
      int y = 0;
      while(x>0)
      {
        int z = x%10;
        if(z%2!=0)
        {
          y=y+z;
        }
        x=x/10;
      }
      if(y<=15)
      {
        s=s+y;
      }

    }
    cout << s ;
    return 0 ;
}
