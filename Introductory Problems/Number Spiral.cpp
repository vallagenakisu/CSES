#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long int x , y ;
    cin >> x >> y ;
    if( x >= y )
    {
        if( x % 2 == 0)
        {
            cout << x*x - (y - 1) << endl;
        }
        else
        {
            cout << (x-1)*(x-1) + y << endl;
        }
    }
    else if ( x < y)
    {
        if(y % 2 == 0)
        {
            cout << (y-1)*(y-1) + x << endl;
        }
        else
        {
            cout << y*y - (x - 1) << endl;
        }
    }

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}
