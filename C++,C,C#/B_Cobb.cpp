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
    
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       vector<int> a(n+1);
       for (int i = 0; i < n; i++)
       cin >> a[i];
       int ans = 0;
       for (int i = 1; i < n;i++)
       {
           ans = max(ans,(i*(i-1))-k*(a[i]|a[i-1]));
       }
    }
    return 0;
}