/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-26 19:06:43
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
#define no cout << "NO\n";
#define yes cout << "YES\n";

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    int s, n;
    cin >> s >> n;
    // cout << s << n;
    map<char, int> mp;
    while (s--)
    {
        char a;
        cin >> a;
        mp[a]++;
    }
    int d = 0;
    for (auto x : mp)
    {
        if (x.second & 1)
        {
            d++;
        }
    }

    if (s - n == 0 || d > n + 1)
    {
        no
    }
    else
    {
        yes
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