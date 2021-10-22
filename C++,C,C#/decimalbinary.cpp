#include <bits/stdc++.h>
using namespace std;
int main()
{int n,b;
    int i = 1;
    long long bin = 0;
    int rem, step = 1;
    cout << "write a decimal";
    cin >> n;
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        bin += rem * i;
        i *= 10;
}
cout<<bin;
    return 0;
}