/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
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

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

void solve()
{
    int f = 0, s = 0;
    string st;
    cin >> st;
    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
        {
            f += (st[i] - '0');
        }
        else
        {
            s += (st[i] - '0');
        }
    }

    // cout << f << " " << s;
    if (f == s)
        cY;
    else
        cN;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}