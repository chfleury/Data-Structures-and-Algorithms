    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    bool comparePair(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.first > b.first;
    }
     
    void solve()
    {
        ll ans = 0;
     
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> t(n);
     
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            if (t[i] >= a)
            {
                ans += a - 1;
            }
            else
            {
                ans += t[i];
            }
        }
     
        ans += b;
        cout << ans << endl;
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
