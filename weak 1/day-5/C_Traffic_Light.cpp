
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

void solve()
{
    /* Lets GO */
    int n;
    char ch;
    cin >> n >> ch;
    string s;
    cin >> s;
    if (ch == 'g')
    {
        cout << 0 << endl;
        return;
    }

    int first = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'g')
        {
            first = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
        {
            int count = 0, flag = 0;
            for (int j = i + 1; j < n; j++)
            {
                count++;
                if (s[j] == 'g')
                {
                    flag++;
                    break;
                }
            }
            i = i + count;
            if (flag)
            {
                ans = max(ans, count);
            }
            else
            {
                ans = max(ans, count + 1 + first);
            }
        }
    }
    cout << ans << endl;
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