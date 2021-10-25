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
       int n;
       cin>>n;
       int a, b;
       a = ceil(n/3.0);
       b = (n - a)/ 2;
       if (a + b * 2 == n)
           cout << a <<" "<< b << endl;
       else
           cout << b << " " << a << endl;
    }
    return 0;
}