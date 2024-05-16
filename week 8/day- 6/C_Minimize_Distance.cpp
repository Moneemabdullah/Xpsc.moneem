/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-16 22:45:32
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define sz(c) (int)(c).size()
#define rsort(a) sort((a).rbegin(), (a).rend())
#define eb emplace_back

/*  --------------------SOLUTION PROGRAM-------------------------*/

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ne, po;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            po.push_back(x);
        if (x < 0)
            ne.push_back(-x);
    }
    ll ans = 0;

    sort(po.begin(), po.end());
    sort(ne.begin(), ne.end());
    reverse(po.begin(), po.end());
    reverse(ne.begin(), ne.end());

    if (ne.size() == 0)
    {
        if (po.size() != 0)
        {
            for (int i = 0; i < po.size(); i += k)
            {
                // cout<<po[i]<<endl;
                ans += po[i] * 2;
            }
            ans -= po[0];
        }
        cout << ans << endl;
    }
    else if (po.size() == 0)
    {
        if (ne.size() != 0)
        {
            for (int i = 0; i < ne.size(); i += k)
            {
                ans += ne[i] * 2;
            }
            ans -= ne[0];
        }
        cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < po.size(); i += k)
            ans += po[i] * 2;
        for (int i = 0; i < ne.size(); i += k)
            ans += ne[i] * 2;
        if (po[0] >= ne[0])
            ans -= po[0];
        else
            ans -= ne[0];
        cout << ans << endl;
    }
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    // int t = 1;
    while (tc--)
    {
        // cout << "Case #" << t++ << ": ";
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/