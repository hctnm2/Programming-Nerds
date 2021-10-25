#include <bits/stdc++.h>
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

signed main()
{
    fastio;
    int t;
    cin >> t;
    int total = 0;
    while(t--)
    {
       int n;
       cin>>n;
      
       if(n<=6)
       total=15;
       else{
       if(n%2!=0)n++;
       total = (n*5)/2;
       }
       cout << total << endl;
    }
    return 0;
}