#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string ar[3][n];
    map<string, int> mp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string x;
            cin >> x;
            // cout << x;
            ar[i][j] = x;
            mp[x]++;
        }
        // cout << endl;
    }
    int p[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << mp.count(ar[i][j]);
            if (mp.count(ar[i][j]) == 1)
            {
                p[i] += 3;
            }
            else if (mp.count(ar[i][j]) == 2)
            {
                p[i] += 1;
            }
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        cout << p[i] << " ";
    }
    // for (auto s : mp)
    // {
    //     cout << s.second << " ";
    // }
    cout << endl;
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
