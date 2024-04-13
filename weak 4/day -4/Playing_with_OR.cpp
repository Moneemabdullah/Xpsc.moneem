/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-13 16:30:53
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
    ll s, k;
    cin >> s >> k;
    vector<ll> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }

    ll f = 0;
    ll r = k;
    ll co = 0;
    ll sum = 0;
    for (int i = f; i < r; i++)
    {
        sum |= v[i];
    }
    while (r <= s)
    {
        if (sum & 1)
        {
            co++;
        }
        sum ^= v[f];
        sum |= v[r];
        f++;
        r++;
    }

    cout << co;
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
