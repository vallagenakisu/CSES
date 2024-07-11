#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n ;
    cin >> n ;
    int a[n-1];
    f(i,n-1) cin >> a[i];
    
    sort(a , a+n-1);
    //f(i,n) cout << a[i] << " ";
    // 1 2 3 5 
    if(a[0] != 1)
    {
        cout << 1 << endl;
        return;
    }
    if(a[n-2] != n)
    {
        cout << n << endl;
        return;
    }   
    f(i,n-1)
    {
        if(a[i] + 1 != a[i+1])
        {
            cout << a[i] + 1 << endl;
            return;
        }

    }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
