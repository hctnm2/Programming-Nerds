#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long 
#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {

        ll n;
        cin >> n;
        ll summ = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            summ += x;
        }
        ll val = summ % n;
                        
                        
    cout<< val*(n-val) << endl;
    }
    return 0;
}



























