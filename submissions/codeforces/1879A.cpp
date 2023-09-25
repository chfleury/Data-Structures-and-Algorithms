    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    bool comparePair(const pair<ll, int> &a, const pair<ll, int> &b)
    {
        return a.first > b.first;
    }
     
    void solve()
    {
        ll ans = 0;
        int n, e;
        ll w, f, g;
        cin >> n;
     
        cin >> w >> e;
        ans = w;
        for (int i = 1; i < n; i++)
        {
            cin >> f >> g;
     
            if (f >= w)
            {
                if (g >= e)
                {
                    ans = -1;
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

