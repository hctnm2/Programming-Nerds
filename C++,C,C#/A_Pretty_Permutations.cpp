#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
using namespace std;
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, j;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n%2!=0)
        {
             for (i = 1; i <= n - 3; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << n << " " << n - 2 << " " << n - 1;
        }
        else
        {
            for (i = 1; i <= n; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            } 
        }
        cout << endl;
    }
    return 0;
}
// int n;
// cin >> n;
// for (int i = 1; i < n - 2; i += 2)
//     cout << i + 1 << " " << i << " ";
// if (n % 2 == 0)
//     cout << n << " " << n - 1 << endl;
// else
//     cout << n << " " << n - 2 << " " << n - 1 << endl;