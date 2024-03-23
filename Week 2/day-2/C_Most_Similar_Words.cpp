/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-23 19:12:30
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
int sr(string a, string b, int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        count += abs(int(a[i] - b[i]));
    }
    // cout << count << " ";
    return count;
}
void solve()
{
    /* Lets GO */
    int n, s;
    cin >> n >> s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;
        v.pb(w);
    }
    if (n == 2)
    {
        cout << sr(v[0], v[1], s) << endl;
        // cout << "hi" << endl;
        return;
    }
    else
    {
        int dif = MAX_N;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (v[i] != v[j])
                {
                    int x = sr(v[i], v[j], s);
                    dif = min(dif, x);
                }
                else
                {
                    dif = 0;
                    break;
                }
            }
            if (dif == 0)
            {
                break;
            }
        }
        cout << dif << endl;
    }
}

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