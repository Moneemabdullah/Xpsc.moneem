/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-08 22:18:35
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
    int n;
    long long k;
    cin >> n >> k;
    vector<int> durability(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> durability[i];
    }

    int sunk_ships = 0;
    int i = 0, j = n - 1;
    while (i <= j && k > 0)
    {
        if (durability[i] < durability[j])
        {
            if (durability[i] <= k)
            {
                k -= durability[i];
                durability[i] = 0;
                ++sunk_ships;
            }
        }
        else
        {
            if (durability[j] <= k)
            {
                k -= durability[j];
                durability[j] = 0;
                ++sunk_ships;
            }
        }
        --j;
        ++i;
    }

    cout << n - sunk_ships << endl;
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