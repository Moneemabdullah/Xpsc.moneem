/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-26 19:36:38
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
    long long n, c;
    cin >> n >> c;
    vector<long long> v(n);
    long long sum = 0;

    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] = v[i] + i + 1;
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum > c)
        {
            cout << i << endl;
            return;
        }
    }
    cout << n << endl;
    return;
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