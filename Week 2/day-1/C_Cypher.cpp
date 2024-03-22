/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
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

void solve()
{
    /* Lets GO */
    int count;
    cin >> count;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < count; j++)
    {
        int s;
        cin >> s;
        int r = 0;
        for (int i = 0; i < s; i++)
        {
            char x;
            cin >> x;
            if (x == 'D')
            {
                r++;
            }
            else if (x == 'U')
            {
                r--;
            }
        }
        // cout << r;
        a[j] = (a[j] + r) % 10;
        if (a[j] >= 0)
        {
            cout << a[j] << " ";
        }
        else
        {
            cout << 10 + a[j] << " ";
        }
    }
    cout << endl;
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