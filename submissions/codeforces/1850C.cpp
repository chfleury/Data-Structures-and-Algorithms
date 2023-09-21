#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    int f = -1;
    for (int i = 0; i < 8; i++)
    {
        cin >> s;
        if (f == -1)
        {

            for (int j = 0; j < 8; j++)
            {

                if (s[j] != '.')
                {
                    f = j;
                    cout
                        << s[j];
                    break;
                }
            }
        }
        else
        {

            if (s[f] != '.')
            {
                cout << s[f];
            }
        }
    }
    cout << endl;
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