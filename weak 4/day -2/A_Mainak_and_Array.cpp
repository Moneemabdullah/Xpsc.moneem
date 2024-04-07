/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-07 12:01:57
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
    vector<int> v, min1, max1;
    int n, mini = INT_MAX;
    int maxi = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    for (int i = 0; i < n - 1; i++)
    {
        mini = min(mini, v[i]);
    }
    maxi = max(maxi, v[n - 1] - mini);
    int maxi1 = 0;
    for (int i = n - 1; i > 0; i--)
    {
        maxi1 = max(maxi1, v[i]);
    }
    maxi = max(maxi, maxi1 - v[0]);
    for (int i = 0; i < n - 1; i++)
    {
        maxi = max(maxi, v[i] - v[i + 1]);
    }
    cout << maxi << endl;
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