/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
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

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

void solve()
{
    ll s;
    cin >> s;
    ll t = 0;
    map<ll, ll> mp;
    for (ll i = 0; i < s; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    for (auto x : mp)
    {
        if (x.second >= 3)
        {
            cout << x.first << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}