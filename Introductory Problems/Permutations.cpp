#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n ;
    cin >> n;
    if( n == 1)
    cout << 1;
    else if( n <= 3 )
    cout << "NO SOLUTION";
    else 
    {
        for(int i = 2 ; i <= n ; i = i + 2)
        cout << i << " ";
        for(int i = 1 ; i <= n ; i = i + 2)
        cout << i << " ";
    }


}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
