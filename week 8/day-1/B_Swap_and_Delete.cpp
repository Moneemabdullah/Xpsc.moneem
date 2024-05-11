/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-11 19:44:58
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
    ll ans = 0;
    string s;
    cin >> s;
    ll n = (ll)s.size();
    ll a[2] = {0, 0};
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - '0']++;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[!(s[i] - '0')] > 0)
        {
            a[!(s[i] - '0')]--;
        }
        else
        {
            ans = n - i;
            break;
        }
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