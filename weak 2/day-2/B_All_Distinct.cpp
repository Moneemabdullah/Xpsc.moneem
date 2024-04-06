/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-24 12:23:56
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

void solve()
{
    /* Lets GO */
    ll s;
    cin >> s;
    map<ll, int> m;
    while (s--)
    {
        int val;
        cin >> val;
        m[val]++;
    }
    int odd = 0, even = 0;
    for (auto X : m)
    {
        int t = X.second;
        if (t & 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    cout << odd + even - (even % 2) << endl;
}

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