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
    map<int, vector<int>> mp;

    for (int i = 0; i < s; i++)
    {
        ll val;
        cin >> val;
        mp[val].push_back(i);
    }

    while (q--)
    {
        ll x, y;
        cin >> x >> y;

        if (mp[x].empty() or mp[y].empty())
        {
            no
        }
        else if (mp[x] == mp[y])
        {
            yes
        }
        else if (mp[x].front() < mp[y].back())
        {
            yes
        }
        else
            no
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
