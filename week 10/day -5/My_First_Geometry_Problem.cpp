/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-29 20:52:21
*/

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define BISMILLAH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int MAX_N = 1e5 + 5;

#define ll long long
#define pb push_back
#define no cout << "NO"
#define yes cout << "YES"
#define PI 3.1415926535897932384626433832795

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    string s;
    cin >> s;
    int cnt = 0;
    int ans = 1;
    for (auto x : s)
    {
        if (x == '1')
        {
            cnt++;
        }
    }
    ans += (cnt * 10);

    if (s[0] == s[2] && s[0] == '1')
    {
        ans += 100;
    }
    if (s[2] == s[1] && s[2] == '1')
    {
        ans += 100;
    }
    if (s[1] == s[3] && s[1] == '1')
    {
        ans += 100;
    }
    if (s[3] == s[0] && s[3] == '1')
    {
        ans += 100;
    }

    cout << ans;
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH

    int tc;
    cin >> tc;
    // int t = 1;
    while (tc--)
    {
        // cout << "Case #" << t++ << ": ";
        solve();
        cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/