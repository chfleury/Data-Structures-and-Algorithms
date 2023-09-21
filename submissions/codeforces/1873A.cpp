#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    string x;
    cin >> x;

    if (
        x[0] == 'a' || x[1] == 'b' || x[2] == 'c')
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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