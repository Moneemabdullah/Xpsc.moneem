/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-15 22:35:43
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 11e5;
int ff[N][N];
bool vis[N][N];
int dis[N][N];
map<pair<int, int>, pair<int, int>> trac;

#define ll long long

ll n, m;
ll di, dj;
ll si, sj;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(ll x, ll y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

void bfs(ll si, ll sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> per = q.front();
        ll a = per.first;
        ll b = per.second;
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll ci = a + d[i].first;
            ll cj = b + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
                trac[{ci, cj}] = {a, b};
                if (ff[ci][cj] == 0)
                {
                    di = ci;
                    dj = cj;
                    return;
                }
            }
        }
    }
}
vector<pair<int, int>> rj;

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    cin >> n >> m;

    memset(vis, false, sizeof(vis));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            ff[i][j] = a;

            if (a == 0)
            {
                rj.push_back({i, j});
            }
        }
    }
    int ans = 0;

    for (auto x : rj)
    {
        bfs(x.first, x.second);

        ans = max(dis[x.first][x.second], ans);
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