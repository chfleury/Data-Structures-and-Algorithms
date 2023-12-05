#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comparePair(const pair<ll, int> &a, const pair<ll, int> &b)
{
    return a.first > b.first;
}

void solve()
{
    string s;

    cin >> s;

    int b = 0;
    int B = 0;
    char ans[s.length()];
    int c = s.length() - 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            b++;
        }
        else if (s[i] == 'B')
        {
            B++;
        }
        else
        {
            // uppercase
            if (s[i] < 97)
            {
                if (B >= 1)
                {
                    B -= 1;
                }
                else
                {
                    ans[c] = s[i];
                    c--;
                }
            }
            // lowercase
            else
            {
                if (b >= 1)
                {
                    b -= 1;
                }
                else
                {
                    ans[c] = s[i];
                    c--;
                }
            }
        }
    }

    for (int i = c + 1; i < s.length(); i++)
        cout << ans[i];

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
