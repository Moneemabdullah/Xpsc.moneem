/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-16 22:30:20
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
    map<ll, char> ma;
    ll n, ind;
    string s;
    cin >> s;
    n = (ll)s.size();
    stack<ll> upper, lower;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (!upper.empty())
            {
                ind = upper.top();
                ma[ind] = '$';
                upper.pop();
            }
            continue;
        }
        if (s[i] == 'b')
        {
            if (!lower.empty())
            {
                ind = lower.top();
                ma[ind] = '$';
                lower.pop();
            }
            continue;
        }
        ma[i] = s[i];
        if (isupper(s[i]))
        {
            upper.push(i);
        }
        else
        {
            lower.push(i);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (ma.count(i) and ma[i] != '$')
        {
            cout << ma[i];
        }
    }
    cout << endl;
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