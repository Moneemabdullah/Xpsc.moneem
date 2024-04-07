/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-06 11:26:31
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
void dfs(int cr, int from, vector<vector<ll>> &tr, vector<ll> &d)
{
    vector<ll> neighbors = tr[cr];
    if (cr > 1 && neighbors.size() == 1)
    {
        d[cr] = 1;
        return;
    }

    for (ll p = 0; p < neighbors.size(); p++)
    {
        ll x = neighbors[p];
        if (x == from)
        {
            continue;
        }
        dfs(x, cr, tr, d);
        d[cr] += d[x];
    }
    return;
}

void solve()
{
    /* Lets GO */
    int v;
    cin >> v;
    int e = v - 1;
    vector<vector<ll>> tr(v + 1, vector<ll>());
    while (e--)
    {
        ll a, b;
        cin >> a >> b;
        tr[a].pb(b);
        tr[b].pb(a);
    }
    vector<ll> d(v + 1, 0);
    dfs(1, 1, tr, d);
    ll q;
    cin >> q;
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        cout << d[a] * d[b] << endl;
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