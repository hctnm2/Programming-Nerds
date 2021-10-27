#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        int arr[2 * n + 1];
        for (int i = 0; i <= 2 * n; i++)
            arr[i] = 1e6;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            arr[a[i]] = i + 1;
        }
        int ct = 0;
        for (int i = 3; i < 2 * n; i++)
        {
            for (int j = 1; j <= sqrt(i); j++)
            {
                if (i % j == 0 && i != j * j)
                {
                    if (arr[j] + arr[i / j] == i)
                    {
                        ct++;
                    }
                }
            }
        }
        cout << ct << endl;
    }
    return 0;
}