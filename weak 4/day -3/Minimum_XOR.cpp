/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-09 23:24:11
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
    int s, Xor = 0;
    cin >> s;
    vector<int> a(s);
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
        Xor ^= a[i];
    }
    int ans = Xor;
    for (int i = 0; i < s; i++)
    {
        ans = min(ans, (Xor ^ a[i]));
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