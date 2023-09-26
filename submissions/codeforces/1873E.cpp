#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int y = 0;
    int ans = 0;
    int n, x;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll t = 0;
    int i = 0;

    ll l = 0;
    ll r = 10000000000;
    ll h;
    while (l < r)
    {
        h = l + (r - l + 1) / 2;

        for (i = 0; i < n; i++)
        {
            if (h - a[i] > 0)
                t += h - a[i];
        }

        if (t < x)
        {
            l = h;
        }else if (t == x){l=h;break;}

        else
        {
            r = h - 1;
        }

        t = 0;
    }

    cout << l << endl;
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
