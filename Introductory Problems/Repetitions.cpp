#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    string a ;
    cin >> a;
    int i = 0 , j = 0 ;
    int windowSize = 0 ;
    int maxWindowSize = 1;
    while(i < a.size() or j < a.size())
    {
        j++;
        if(a[i] == a[j])
        {
            while(a[i] == a[j])
            {
                windowSize = j-i +1 ;
                j++;
            }
            maxWindowSize = max(maxWindowSize,windowSize);
            i = j ;
        }
        else 
        {
            i = j;
        }
    }
    cout << maxWindowSize << endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();  
}
