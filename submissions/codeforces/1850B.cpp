#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, l, q;
    cin >> n;
    int ans = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> q;
        if (l <= 10 && (ans == 0 || q > max))
        {

            ans = i + 1;
            max = q;
        }
    }

    cout
        << ans << endl;
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