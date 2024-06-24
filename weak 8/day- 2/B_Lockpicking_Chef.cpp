/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-12 21:34:01
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
int dif(int a, int b)
{
    int diff = abs(a - b);
    if (a <= b)
        return diff;
    else
        return 10 - diff;
}
/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;
    int ans = 1e5;
    for (int i = 0; i <= n - m; i++)
    {
        int val = 0;
        for (int j = 0; j < m; j++)
        {
            val += min(abs(s[i + j] - k[j]), abs(10 - abs(s[i + j] - k[j])));
        }
        ans = min(ans, val);
    }
    cout << ans << endl;
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