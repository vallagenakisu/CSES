#include<bits/stdc++.h>
#define f(i,n) for(int i=1;i<n;i++)
using namespace std;
void sol()
{
    long long int n;
    cin >> n ;
    long long int a[n];
    for(int i = 0 ; i < n ; i ++ )
    cin >> a[i];
    long long int count = 0 ;
    f(i,n)
    {
        if(a[i] <= a[i-1])
        {
            //cout << a[i] << " " << a[i-1] << a[i-1] - a[i] <<endl;

            count = count + a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }
    cout << count ;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
