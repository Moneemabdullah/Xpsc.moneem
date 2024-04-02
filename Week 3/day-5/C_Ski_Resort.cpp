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
    ll count, n, k, q;
    cin >> count;
    cin >> n >> k >> q;
    vector<ll> v;
    for (int i = 0; i < count; i++)
    {
        int val;
        cin >> val;
        if (val < q)
        {
            v.pb(val);
        }
    }
    // if (k < v.size())
    // {
    //     cout << k;
    //     return;
    // }

    ll a = pow(v.size(), 2) - 1;
    cout << max(k, a) << endl;
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