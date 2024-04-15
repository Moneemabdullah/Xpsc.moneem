/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-14 21:54:20
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

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    ll s;
    cin >> s;
    map<ll, ll> mp;
    for (int i = 0; i < s; i++)
    {
        ll val;
        cin >> val;
        mp[__lg(val)]++;
    }
    ll ans = 0;
    for (auto [x, y] : mp)
    {
        ans += 1LL * (y * (y - 1)) / 2;
    }
    cout << ans << endl;
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