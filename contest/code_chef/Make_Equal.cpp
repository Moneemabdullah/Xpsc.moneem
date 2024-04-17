/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-17 21:19:26
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
#define yes cout << "YES";

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    ll s;
    cin >> s;
    vector<ll> v(s);

    for (ll i = 0; i < s; i++)
    {
        cin >> v[i];
    }
    ll mx = 0;
    ll mn = v[0];
    for (ll i = 0; i < s; i++)
    {

        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }

    if (mx - mn > s)
    {
        no return;
    }

    if (v[0] > mn)
    {
        no
    }
    else
        yes
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
        cout << endl;
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/