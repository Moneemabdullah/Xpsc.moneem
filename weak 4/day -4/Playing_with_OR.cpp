/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-13 16:30:53
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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0, odd = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] % 2 != 0)
            odd++;
    }
    if (odd > 0)
        ans++;

    for (int i = k; i < n; i++)
    {
        if (a[i - k] % 2 != 0)
            odd--;
        if (a[i] % 2 != 0)
            odd++;
        if (odd > 0)
            ans++;
    }

    cout << ans;
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
        cout << endl;
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
