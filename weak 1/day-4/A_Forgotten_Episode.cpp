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
    int count;
    cin >> count;
    vector<int> v;
    for (int i = 0; i < count - 1; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < count; i++)
    {
        if (v[i] != i + 1)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}