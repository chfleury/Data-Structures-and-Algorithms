    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    bool comparePair(const pair<ll, int> &a, const pair<ll, int> &b)
    {
        return a.first > b.first;
    }
     
    void solve()
    {
        int ans = 1;
        int n, t;
     
        cin >> n;
        cin >> t;
     
        if (t == 1)
            ans++;
     
        for (int i = 1; i < n; i++)
        {
            ans++;
     
            cin >> t;
     
            if (ans == t)
            {
                ans++;
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
