/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-25 20:53:47
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>> |
#define vpi vector<pair<int, int>>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    ll a, b, k;
    cin >> a >> b >> k;
    ll ans = 0;

    if (b < k)
    {
        cout << b - a << endl;
        return;
    }
    while (true)
    {
        if (b % k == 0 && b / k >= a)
        {
            ans++;
            b = b / k;
        }
        else if (b % k == 0)
        {
            ans = ans + (b - a);
            break;
        }
        else
        {
            ans = ans + (b % k);
            b = b - (b % k);
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