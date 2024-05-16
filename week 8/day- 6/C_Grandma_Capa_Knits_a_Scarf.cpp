/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-16 21:21:02
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
    /* Lets GO */
    string a, b, d;
    ll n, i, j, ans, c, m, l, h, f;
    cin >> n;

    cin >> a;

    ans = 100000000;
    for (i = 0; i < 26; i++)
    {
        c = 0;
        f = 0;
        for (l = 0, h = n - 1; l < h;)
        {
            if (a[l] != a[h])
            {
                if (a[l] == char(i + 97))
                {
                    l++;
                    c++;
                }
                else if (a[h] == char(i + 97))
                {
                    h--;
                    c++;
                }
                else
                {
                    f++;
                    break;
                }
            }
            else
            {
                l++;
                h--;
            }
        }
        if (f == 0)
        {
            ans = min(ans, c);
        }
    }
    if (ans == 100000000)
        ans = -1;

    cout << ans << "\n";
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