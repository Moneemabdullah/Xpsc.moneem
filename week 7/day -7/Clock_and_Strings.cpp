/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-10 20:56:24
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a < c && c < b && b < d) || (c < a && a < d && d < b))
    {
        cout << "YES" << endl;
        return;
    }

    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);

    if ((a < c && c < b && b < d) || (c < a && a < d && d < b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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