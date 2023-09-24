#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comparePair(const pair<ll, int> &a, const pair<ll, int> &b)
{
    return a.first > b.first;
}

void solve()
{
    ll ans = 0;
    int n, e;
    ll w, f;
    cin >> n;

    vector<pair<ll, int>> s;

    cin >> w >> e;

    for (int i = 1; i < n; i++)
    {
        cin >> f >> ans;
        s.emplace_back(f, ans);
    }

    sort(s.begin(), s.end(), comparePair);

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i].first >= w)
        {

            if (s[i].second >= e)
            {
                ans = -1;
                break;
            }
        }
        else
        {
            ans = w;
            break;
        }
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