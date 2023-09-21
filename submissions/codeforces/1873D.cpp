#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    int ans = 0;
    int n, k;
    int f = -1;
    string s;

    cin >> n >> k;
    cin >> s;

    int i = 0;

    while (i < n)
    {
        if (s[i] == 'B')
        {
            ans++;
            i += k;
        }
        else
            i++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}