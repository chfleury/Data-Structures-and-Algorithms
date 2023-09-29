#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
void solve()
{
    ll ans = 0;
    int n, z, t;
    cin >> n >> z;
    ll x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int l = 0, r = 1000000000; // 10**9 since 10**18 is the max value of z (c)
    ll mid;
    ll sum = 0;
    while (l < r)
    {
        mid = l + (r - l) / 2;

        sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum += (x[i] + (2 * mid)) * (x[i] + (2 * mid));

            if (sum > z)
            {

                break;
            }
        }

        if (sum == z)
        {
            ans = mid;
            break;
        }
        if (sum < z)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
