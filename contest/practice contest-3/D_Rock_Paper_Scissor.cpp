/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-02 23:11:23
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
    int s;
    cin >> s;
    string ch;
    string gf;
    cin >> ch >> gf;
    int c = 0, g = 0, d = 0;
    for (int i = 0; i < s; i++)
    {
        if (ch[i] == gf[i])
        {
            d++;
        }
        else if (ch[i] == 'R')
        {
            if (gf[i] == 'S')
            {
                c++;
            }
            else if (gf[i] == 'P')
            {
                g++;
            }
        }
        else if (ch[i] == 'P')
        {
            if (gf[i] == 'S')
            {
                g++;
            }
            else if (gf[i] == 'R')
            {
                c++;
            }
        }
        else if (ch[i] == 'S')
        {
            if (gf[i] == 'P')
            {
                c++;
            }
            else if (gf[i] == 'R')
            {
                g++;
            }
        }
    }

    ll ans = 0;
    while (c <= g)
    {
        ans++;
        if (g > 0)
        {
            g--;
            c++;
        }
        else
        {
            d--;
            c++;
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