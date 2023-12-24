#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comparePair(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first > b.first;
}

void solve()
{
    int ans = 0;

    int k;
    cin >> k;
    vector<int> a(k);
    bool x = true;
    int y = 1;
    bool z = false;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];

        if (a[i] < 0)
        {
            x = !x;
            y = i + 1;
        }
        if (!z && a[i] == 0)
        {
            z = true;
        }
    }
    if (z)
    {
        cout << 0 << endl;
        return;
    }

    if (x)
    {

        cout << 1 << endl
             << y << " " << 0 << endl;
        return;
    }

    cout << 0 << endl;
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
