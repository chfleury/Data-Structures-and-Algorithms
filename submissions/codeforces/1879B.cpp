#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll ans = 0;
    int n;
    cin >> n;

    vector<ll> r(n);
    vector<ll> c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    sort(r.begin(), r.end());
    sort(c.begin(), c.end());

    ll a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {

        a += r[0] + c[i];
        b += c[0] + r[i];
    }

    ans = min(a, b);

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
