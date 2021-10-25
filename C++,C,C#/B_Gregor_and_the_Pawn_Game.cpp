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

    while (t--)
    {
        int n;
        cin >> n;
        int sol = 0;
        string a;
        cin >> a;
        string b;
        cin >> b;
        bool hash[n] = {0};

        int i = 0;
        while (i < n)
        {
            if (b[i] == '1')
            {
                if (i == 0)
                {
                    if (a[i] == '0')
                        sol++;
                    else if (a[i + 1]=='1')
                    {
                        sol++;
                        hash[i + 1] = true;
                    }
                }
                else
                {
                    if (a[i] == '0')
                        sol++;
                    else if (a[i - 1] == '1' && !hash[i - 1])
                    {
                        hash[i - 1] = true;
                        sol++;
                    }
                    else if (i < n - 1)
                    {
                        if (a[i + 1] == '1' && !hash[i + 1])
                        {
                            hash[i + 1] = true;
                            sol++;
                        }
                    }
                }
            }
            i++;
        }

        cout << sol << endl;
    }
    return 0;
}