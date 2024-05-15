/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-15 20:38:32
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
    ll a, b;
    cin >> a >> b;
    ll ans = 0;

    if (a >= 1000)
    {
        ans = a * 2;
    }
    else
    {
        ans = a + 1000;
    }

    for (ll i = 1; i < b; i++)
    {
        ans = (ans * 2);
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