#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, k;

    cin >> n >> k;
    int arr[n];
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        arr[i] = t;
    }
    t = 0;
    int ans = 0;

    sort(arr, arr + n);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] <= k)
        {
            t++;
        }
        else
        {
            ans = max(t, ans);

            t = 0;
        }
    }
    ans = max(t, ans);

    cout << n - 1 - ans << endl;
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
