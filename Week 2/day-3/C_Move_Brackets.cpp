/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-25 11:38:23
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
    int s;
    cin >> s;
    vector<char> c;
    while (s--)
    {
        char a;
        cin >> a;
        c.pb(a);
    }
    int op = 0;
    int cl = 0;
    int ans = 0;
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == ')' && cl == 0)
        {
            ans++;
            op++;
        }
        else if (c[i] == '(')
        {
            cl++;
            op--;
        }
        else if (c[i] == ')' && cl != 0)
        {
            cl--;
        }
    }
    cout << ans << endl;
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