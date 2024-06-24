/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-23 21:07:29
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
    vector<ll> om;
    vector<ll> ad;
    ll j = 0;
    ll a = 0, o = 0;
    for (int i = 0; i < s; i++)
    {

        ll val;
        cin >> val;
        if (val > 0)
        {
            j++;
            o = max(o, j);
        }
        else
        {

            j = 0;
        }
    }
    ll k = 0;
    for (int i = 0; i < s; i++)
    {

        int val;
        cin >> val;
        if (val > 0)
        {
            k++;
            a = max(a, k);
        }
        else
        {

            k = 0;
        }
    }

    if (a > o)
    {
        cout << "Addy" << endl;
    }
    else if (a == o)
    {
        cout << "Draw" << endl;
    }
    else
    {
        cout << "Om" << endl;
    }
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
        // ssol();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/