/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-11 21:29:30
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
    ll n;
    cin >> n;
    vector<ll> b, c;
    vector<bool> vis(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        vis[i] = false;
    }

    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= n)
        {
            if (vis[v[i]] == false)
            {
                vis[v[i]] = true;
            }
            else
            {
                b.push_back(v[i]);
            }
        }
        else
        {
            b.push_back(v[i]);
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            c.push_back(i);
        }
    }
    sort(b.begin(), b.end());
    ll m = b.size();
    ll f = 0;
    for (ll i = 0; i < m; i++)
    {
        if (2 * c[i] >= b[i])
        {
            f++;
            break;
        }
    }

    if (f == 0)
    {
        cout << m << "\n";
    }
    else
    {
        cout << "-1\n";
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