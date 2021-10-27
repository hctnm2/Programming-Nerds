#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (ll i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        ll pos = lower_bound(arr, arr + n, x) - arr;
        if (pos < n && arr[pos] == x)
            cout << 0 << endl;
        else if (pos % 2 == 0)
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl;
    }
}

int main()
{
    ll t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
}
