/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-20 07:54:43
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
    int s, q;
    cin >> s >> q;
    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vector<ll> sum;

    ll st = 0;

    for (int i = s - 1; i >= 0; i--)
    {
        st += v[i];
        sum.pb(st);
    }
    while (q--)
    {
        int val;
        cin >> val;
        if (val > *(sum.rbegin()))
        {
            cout << -1 << endl;
        }
        else
        {

            ll ans = 1 + lower_bound(sum.begin(), sum.end(), val) - sum.begin();
            cout << ans << endl;
        }
    }
    // for (auto x : sum)
    // {
    //     cout << x << " ";
    // }
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