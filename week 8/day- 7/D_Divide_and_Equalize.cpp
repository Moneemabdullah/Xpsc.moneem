/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-17 19:42:48
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {

        for (int j = 2; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                while (a[i] % j == 0)
                {
                    cnt[j]++;
                    a[i] /= j;
                }
            }
        }
        if (a[i] > 1)
        {
            cnt[a[i]]++;
        }
    }

    bool ok = true;

    for (auto [x, y] : cnt)
    {
        if (y % n != 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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