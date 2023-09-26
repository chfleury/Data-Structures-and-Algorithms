#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    bool ans = false;
    int n, x;
    cin >> n >> x;
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == x)
        {
            ans = true;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
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
