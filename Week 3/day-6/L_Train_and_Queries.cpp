/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-04 11:33:06
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
void ssolve()
{
    ll s, q;
    cin >> s >> q;
    map<int, pair<int, int>> mp; // Map to store min and max indices

    for (i = 0; i < s; i++)
    {
        ll val;
        cin >> val;
        if (mp.find(val) == mp.end()) // If value not found in map
            mp[val] = {i, i};         // Initialize min and max indices
        else
        {
            mp[val].first = min(mp[val], i);  // Update min index using std::min
            mp[val].second = max(mp[val], i); // Update max index using std::max
        }
    }

    while (q--)
    {
        ll x, y;
        cin >> x >> y;

        if (mp.find(x) != mp.end() && mp.find(y) != mp.end()) // Both values are found
        {
            if ((mp[x].first < mp[y].first && mp[x].second < mp[y].first) || // x appears before y
                (mp[y].first < mp[x].first && mp[y].second < mp[x].first))   // y appears before x
                yes else no
        }
        else
            no // One or both values not found
    }
}

// }
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
        ssolve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
