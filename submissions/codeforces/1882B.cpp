#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int ans = 0;
    int n;
    cin >> n;
    int t;
    set<int> s[n];
    set<int> z;
    set<int> m;
    int g;

    for (int j = 0; j < n; j++)
    {
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            cin >> g;
            s[j].insert(g);
            m.insert(g);
        }
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    for (const auto &i : m)
    {

        for (int j = 0; j < n; j++)
        {

            if (s[j].find(i) == s[j].end())
            {

                for (const auto &e : s[j])
                {
                    z.insert(e);
                }
            }
        }
        ans = max(ans, static_cast<int>(z.size()));

        z.clear();
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
