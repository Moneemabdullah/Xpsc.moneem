/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-30 11:00:01
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

vpi d = {{1, 1}, {-1, -1}, {-1, 1}, {1, -1}};

/*  --------------------EXTRA FANCTION-------------------------*/
int maxs(int n, int m, vvi g)
{
    vvi sum(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            sum[i][j] = g[i][j];
            for (int s = 0; s < 4; s++)
            {
                int x = i + d[s].first;
                int y = j + d[s].second;
                while (x >= 0 && x < n && y >= 0 && y < m)
                {
                    sum[i][j] += g[x][y];
                    x += d[s].first;
                    y += d[s].second;
                }
            }
        }
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            total = max(total, sum[i][j]);
        }
    }
    return total;
}

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{

    int n, m;
    cin >> n >> m;
    vvi g(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    cout << maxs(n, m, g) << endl;
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