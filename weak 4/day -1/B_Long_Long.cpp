/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-05 23:15:11
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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ct = 0, t = 0, o = 0;
    bool flg = 0;
    for (int i = 0; i < n; i++)
    {
        ct += abs(arr[i]);
        if (arr[i] < 0)
        {
            t++;
            flg = 1;
        }
        else if (arr[i] == 0 && flg)
            t++;
        else
        {
            if (t != 0)
                o++;
            t = 0;
            flg = 0;
        }
    }
    if (t != 0)
        o++;
    cout << ct << " " << o << endl;
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