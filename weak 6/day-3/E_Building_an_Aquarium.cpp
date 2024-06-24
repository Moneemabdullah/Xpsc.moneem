/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-28 19:57:44
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
    ll n, avail_water, l = 1;
    ll r = 0;
    cin >> n >> avail_water;
    vector<ll> coral_ht(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> coral_ht[i];
    }
    r = 1e10;
    while (l < r - 1)
    {

        ll total_water = 0;
        ll mid_ht = l + (r - l) / 2;
        for (ll i = 0; i < n; i++)
        {
            if (coral_ht[i] < mid_ht)
            {
                total_water += (mid_ht - coral_ht[i]);
            }
        }
        if (total_water > avail_water)
        {
            r = mid_ht;
        }
        else
        {
            l = mid_ht;
        }
    }
    cout << l << endl;
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