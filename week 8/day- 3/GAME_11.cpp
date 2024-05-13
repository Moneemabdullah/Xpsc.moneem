/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-01 20:43:14
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 5;

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
    ll bol, bet;
    cin >> bol >> bet;
    priority_queue<ll> bets;
    priority_queue<ll> blow;

    for (ll i = 0; i < bet; i++)
    {
        int val;
        cin >> val;
        bets.push(val);
    }
    for (ll i = 0; i < bol; i++)
    {
        int val;
        cin >> val;
        blow.push(val);
    }

    if (bol < 4 || bet < 4 || (bol + bet) < 11)
    {
        cout << -1 << endl;
    }
    else
    {
        ll ans = 0;
        for (ll i = 0; i < 4; i++)
        {
            ans += bets.top();
            ans += blow.top();
            bets.pop();
            blow.pop();
        }
        ll count = 8;
        ll l = 4, r = 4;
        while (l <= bet || r <= bol)
        {
            if (count == 11)
            {
                break;
            }

            if (bets.top() >= blow.top())
            {
                ans += bets.top();
                bets.pop();
                count++;
            }
            else if (bets.top() < blow.top())
            {
                ans += blow.top();
                blow.pop();
                count++;
            }
        }
        cout << ans << endl;
    }
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc;
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
