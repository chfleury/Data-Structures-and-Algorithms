#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    int n;
    int ans = 1;
    int arr[9];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    arr[0] += 1;

    for (int i = 0; i < n; i++)
    {
        ans *= arr[i];
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