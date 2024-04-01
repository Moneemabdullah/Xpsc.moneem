/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-01 10:48:10
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<ll>>
#define vpi vector<pair<ll, ll>>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> ch(n);
    for (ll i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        if (a == 'L')
        {
            ans += i;
        }
        else if (a == 'R')
        {
            ans += abs(n - i - 1);
        }

        if (a == 'L')
        {
            ch[i] = n - i - 1 - (i);
        }
        else
        {
            ch[i] = i - (n - i - 1);
        }
    }
    sort(ch.begin(), ch.end());
    reverse(ch.begin(), ch.end());

    for (ll i = 0; i < n; i++)
    {

        if (ch[i] > 0)
        {
            ans = ans + ch[i];
        }
        cout << ans << " ";
    }
    cout << endl;
}

/*  --------------------MAIN PROGRAM----------------------------*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc;
    cin >> tc;
    // ll t = 1;
    while (tc--)
    {
        // cout << "Case #" << t++ << ": ";
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/