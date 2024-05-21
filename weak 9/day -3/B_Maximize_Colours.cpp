/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-21 21:29:59
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
    vector<ll> v(3);

    cin >> v[0] >> v[1] >> v[2];
    ll ans = 0;

    if (v[0] > 0)
    {
        v[0]--;
        ans++;
    }
    if (v[1] > 0)
    {
        v[1]--;
        ans++;
    }
    if (v[2] > 0)
    {
        v[2]--;
        ans++;
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    if (v[0] > 0 && v[1] > 0)
    {
        v[0]--;
        v[1]--;
        ans++;
    }
    if (v[0] > 0 && v[2] > 0)
    {
        v[0]--;
        v[2]--;
        ans++;
    }
    if (v[1] > 0 && v[2] > 0)
    {
        v[1]--;
        v[2]--;
        ans++;
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