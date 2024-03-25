
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-24 22:42:26
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

bool dp[1005][1005];

bool rec(int a, int b)
{
    if (a < 0 || b < 0 || a >= 1005 || b >= 1005)
        return false;
    if (dp[a][b])
        return false;
    if (a == b)
        return true;
    dp[a][b] = true;
    return rec(a - 1, b + 1) || rec(a + 3, b - 1);
}

void solve()
{
    int a, b;
    cin >> a >> b;
    memset(dp, false, sizeof(dp));
    if (rec(a, b))
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
    while (tc--)
    {
        solve();
    }
    return 0;
}
