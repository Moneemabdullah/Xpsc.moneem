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
    int s;
    cin >> s;
    int d = 0;
    if (s <= 1399)
    {
        d = 4;
    }
    else if (s > 1399 && s < 1600)
    {
        d = 3;
    }
    else if (s >= 1600 && s < 1900)
    {
        d = 2;
    }
    else
    {
        d = 1;
    }

    cout << "Division " << d << endl;
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