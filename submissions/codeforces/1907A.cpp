#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comparePair(const pair<ll, int> &a, const pair<ll, int> &b)
{
    return a.first > b.first;
}

void solve()
{
    string p;

    cin >> p;

    int c = 97;

    for (int i = 1; i <= 8; i++)
    {
        char character = static_cast<char>(c);

        if ((i + 48) != p[1])
        {
            cout << p[0] << i << endl;
        }

        if (character != p[0])
        {
            cout << character << p[1] << endl;
        }

        c++;
    }
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
