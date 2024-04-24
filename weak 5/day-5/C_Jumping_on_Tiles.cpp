/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-24 19:08:58
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

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    string s;
    cin >> s;
    map<char, vector<int>> m;

    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]].pb(i + 1);
    }
    int n = s.size();

    if (s[0] > s[n - 1])
    {
        int jmp = 0;
        int cost = abs(s[0] - s[n - 1]);
        vector<int> c;
        for (int i = 0; s[0] + i >= s[n - 1]; i--)
        {
            char a = s[0] + i;
            if (m.find(a) != m.end())
            {
                for (auto v : m[a])
                {
                    c.pb(v);
                }
            }
        }
        cout << cost << " " << c.size() << endl;
        for (auto x : c)
            cout << x << " ";

        cout << endl;
    }
    else if (s[0] < s[n - 1])
    {
        int jmp = 0;
        int cost = abs(s[0] - s[n - 1]);
        vector<int> c;
        for (int i = 0; s[0] + i <= s[n - 1]; i++)
        {
            char a = s[0] + i;
            if (m.find(a) != m.end())
            {
                for (auto v : m[a])
                {
                    c.pb(v);
                }
            }
        }
        cout << cost << " " << c.size() << endl;
        for (auto x : c)
            cout << x << " ";

        cout << endl;
    }
    else
    {
        cout << 0 << " " << m[s[0]].size() << endl;
        for (auto x : m[s[0]])
            cout << x << " ";
        cout << endl;
    }
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