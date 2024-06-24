/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-06 20:15:16
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
    int s, k, mx = 0;
    cin >> s >> k;
    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    for (int i = 0; i < s; i++)
    {
        v[i] += ((mx - v[i]) / k) * k;
    }

    sort(v.begin(), v.end());
    int ans = v[s - 1] - v[0];
    for (int i = 0; i < s - 1; i++)
    {
        ans = min(ans, (v[i] + k) - v[i + 1]);
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