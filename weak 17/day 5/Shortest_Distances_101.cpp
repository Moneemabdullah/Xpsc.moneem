
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-08-14 21:53:45
*/

#include <bits/stdc++.h>
using namespace std;

#define BISMILLAH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int INF = 1e9;

void bfs(int start, const vector<vector<int>> &adj, vector<int> &dis)
{
    fill(dis.begin(), dis.end(), INF);
    queue<int> q;
    q.push(start);
    dis[start] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dis[v] == INF)
            {
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<vector<int>> adj(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            if (i + j <= n)
            {
                adj[i].push_back(i + j);
            }
        }
    }

    vector<int> dis(n + 1); // Distance vector for BFS

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << 0 << endl;
            continue;
        }

        bfs(x, adj, dis);

        if (dis[y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[y] << endl;
        }
    }
}

int main()
{
    BISMILLAH
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
