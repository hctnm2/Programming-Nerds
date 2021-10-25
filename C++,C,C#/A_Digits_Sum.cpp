#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define int long long 
using namespace std;

signed main()
{
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin>>n;
    cout << (n + 1) / 10 <<'\n';
    }
    return 0;
}