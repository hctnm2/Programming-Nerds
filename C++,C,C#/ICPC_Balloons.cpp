#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        ll c = 0, postion = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] <= 7)
                c++;
            if (c == 7)
            {
                postion = i+1;
                c++;
            }
        }
        cout << postion << endl;
    }
}
