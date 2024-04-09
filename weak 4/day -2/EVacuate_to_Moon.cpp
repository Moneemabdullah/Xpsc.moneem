/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-09 11:33:41
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
    ll n, m, x;
    cin >> n >> m >> x;
    vector<ll> cap(n);
    vector<ll> pow(m);
    for (int i = 0; i < n; i++)
    {
        cin >> cap[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> pow[i];
    }
    sort(cap.begin(), cap.end(), greater<ll>());
    sort(pow.begin(), pow.end(), greater<ll>());
    ll ans = 0;
    int i = 0;
    while (i < n && i < m)
    {
        ans += min(cap[i], pow[i] * x);
        i++;
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