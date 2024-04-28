/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-28 20:47:49
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
unordered_map<ll, ll> mp;

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    ll x;
    cin >> x;

    ll c = cbrt(x);

    bool f = false;

    for (ll i = 1; i <= 10000; i++)
    {
        if (f)
            break;

        ll z = i * i * i;
        if (z >= x)
            break;

        if (mp.find(x - z) != mp.end())
        {
            f = true;
        }
    }

    if (!f)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    mp[0] = 0;
    for (long long int i = 1; i <= 10001; i++)
    {
        mp[i * i * i]++;
    }
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