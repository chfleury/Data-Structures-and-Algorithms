#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    string t[10];
    int ans = 0;
    int x = 1;
    for (int i = 0; i < 10; i++)
    {
        cin >> t[i];
        for (int j = 0; j < 10; j++)
        {

            if (t[i][j] == 'X')
            {

                if (i == 0 || i == 9 || j == 0 || j == 9)
                {
                    ans += 1;
                    continue;
                }
                if (i == 1 || i == 8 || j == 1 || j == 8)
                {

                    ans += 2;
                    continue;
                }
                if (i == 2 || i == 7 || j == 2 || j == 7)
                {

                    ans += 3;
                    continue;
                }

                if (i == 3 || i == 6 || j == 3 || j == 6)
                {

                    ans += 4;
                    continue;
                }

                if (i == 4 || i == 5 || j == 4 || j == 5)
                {

                    ans += 5;
                    continue;
                }
            }
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