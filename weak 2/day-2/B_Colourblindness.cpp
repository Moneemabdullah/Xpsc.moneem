/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-24 21:40:57
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
bool div(char a, char b)
{
    if (a == b)
    {
        return true;
    }
    else if (a == 'G')
    {
        if (b == 'G' || b == 'B')
            return true;
        }
    else if (a == 'B')
    {
        if (b == 'G' || b == 'B')
            return true;
    }

    return false;
}

void solve()
{
    /* Lets GO */
    int count;
    string s;
    string t;
    cin >> count;
    cin >> s;
    cin >> t;
    bool tr = true;
    for (int i = 0; i < count; i++)
    {
        if (!div(s[i], t[i]))
        {
            tr = false;
        }
    }
    if (tr)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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