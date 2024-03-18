/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define lli long long int
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

void solve()
{
    lli count;
    cin >> count;
    vector<lli> v;

    lli total = 0;

    for (lli i = 0; i < count; i++)
    {
        int x;
        cin >> x;
        total += x;
        if (x % 2 != 0)
        {
            v.pb(x);
        }
    }
    if (total % 2 == 0)
    {
        cout << total << endl;
    }
    else
    {
        sort(v.begin(), v.end());
        for (int x : v)
        {
            cout << total - x << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << "Case #" << t << ": ";
    solve();
}