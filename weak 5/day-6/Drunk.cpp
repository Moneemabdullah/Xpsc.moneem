/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-25 20:40:19
*/

#include <bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GREY 1
#define BLACK 2

const int N = 10005;

vector<int> g[N];
int color[N];
bool has_cycle;

void dfs(int u)
{
    color[u] = GREY;

    for (int v : g[u])
    {
        if (color[v] == GREY)
        {
            has_cycle = true;
            return;
        }
        if (color[v] == WHITE)
            dfs(v);
    }
    color[u] = BLACK;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc, n, e, i;
    string s, t;

    cin >> tc;
    for (int cn = 1; cn <= tc; cn++)
    {
        map<string, int> m;
        for (i = 0; i < N; i++)
            g[i].clear();

        cin >> e;
        n = 0; // idx of nodes
        while (e--)
        {
            cin >> s >> t;
            if (m.find(s) == m.end())
                m[s] = n++;
            if (m.find(t) == m.end())
                m[t] = n++;
            g[m[s]].push_back(m[t]);
        }

        memset(color, WHITE, sizeof(color));
        has_cycle = false;
        for (i = 0; i < n; i++)
        {
            if (color[i] == WHITE)
                dfs(i);
            if (has_cycle)
                break;
        }

        cout << "Case " << cn << ": ";
        if (has_cycle)
            cout << "No" << "\n";
        else
            cout << "Yes" << "\n";
    }
    return 0;
}