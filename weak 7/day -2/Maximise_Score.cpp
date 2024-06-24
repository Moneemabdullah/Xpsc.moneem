/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-04 19:40:23
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
    vector<ll> v(s);
    for (int i = 0; i < s; i++)
        cin >> v[i];

      ll ans = 1e9;

    for (int i = 0; i < s; i++)
    {
        ll ans_cr = 0;
        for (int j : {i + 1, i - 1})
        {
            if (j < 0 or j > s)
                continue;
            ans_cr = max(ans_cr, abs(v[i] - v[j]));
        }
        ans = min(ans, ans_cr);
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