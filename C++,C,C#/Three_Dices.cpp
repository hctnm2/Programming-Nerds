#include <bits/stdc++.h>

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
    
    while(t--)
    {

       int x, y;
       cin >> x >> y;
       int sum = x + y;

       if (sum >= 6)
           cout << 0 << endl;
       else
       {
           unordered_map<int, string> mp;
           mp[1] = "0.166666";
           mp[2] = "0.333333";
           mp[3] = "0.5";
           mp[4] = "0.666666";
           cout << mp[6 - sum] <<endl;
       }
    }
    return 0;
}