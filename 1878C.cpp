#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    bool ans = true;
    ll n, k, x;
    cin >> n >> k >> x;
    ll max, min;

    min = (k * (k + 1)) / 2;

    max = min + ((n - k) * k);

    if (x > max || x < min)
    {

        ans = false;
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
