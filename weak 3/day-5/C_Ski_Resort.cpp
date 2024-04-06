/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-02 11:23:08
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;

/*----------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    ll n, k, q;
    cin >> n >> k >> q;
    // cout << n << k << q;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        v.pb(val);
    }
    ll ans = 0;
    ll i = 0;

    while (i < n)
    {
        ll s = 0;
        while (v[i] <= q && i < n)
        {
            s++;
            i++;
        }
        while (v[i] > q && i < n)
        {
            i++;
        }
        if (s >= k)
        {
            ll r = s - k + 1;
            ans += (r * (r + 1)) / 2;
        }
    }

    cout << ans << endl;
}

/*----------------------MAIN PROGRAM----------------------------*/

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