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
    int red = 0, green = 0, f = 0;
    int hash[26] = {0};
    while(t--)
    {
       string s;
       cin>>s;
       int n = s.length();
       vector<int> freq(26);
       for (int i = 0; i < n; i++)
       {
           freq[s[i] - 'a']++;
       }
       int ans = 0;
       int extra = 0;
       for (int i = 0; i < 26; i++)
       {
           if (freq[i] == 1)
           {
               extra += 1;
           }
           else if (freq[i] >= 2)
           {
               ans++;
           }
       }
       cout << ans + extra / 2 <<endl;
    }
    return 0;
}