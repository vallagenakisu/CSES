#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long int n;
    cin >> n ;
    cout << n << " ";
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n/2;
            cout << n <<" ";
        }
        else 
        {
            n = n*3 + 1;
            cout << n <<" ";
        }
    }
    
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
