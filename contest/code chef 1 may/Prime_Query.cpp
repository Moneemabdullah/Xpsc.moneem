/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-01 21:29:54
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
bool pr(int s)
{
    if (s < 2)
    {
        return false;
    }

    for (int i = 1; i * i < s; i++)
    {
        if (s % i == 0)
        {
            return false;
        }
    }

    return true;
}
/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    int s;
    cin >> s;
    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        /* code */
        cin >> v[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int ans = 0;
        int l, r, t;
        cin >> l >> r >> t;
        for (int i = 1; i < 100; i++)
        {

            if (pr(v[l - 1] + v[r - 1]) && pr(v[l - 1] * v[r - 1]))
            {
                ans++;
                t--;
            }
            else if (pr(v[l - 1] + v[r - i]) && pr(v[l - 1] * v[r - i]))
            {
                ans++;
                t--;
            }
            else if (pr(v[l - i] + v[r - 1]) && pr(v[l - i] * v[r - 1]))
            {
                ans++;
                t--;
            }
            if (t == 0)
            {
                break;
            }
        }

        cout << ans << endl;
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
