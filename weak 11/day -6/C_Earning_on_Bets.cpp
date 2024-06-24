/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-06 21:55:16
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
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &val : v)
        cin >> val;

    int x = 1;

    for (auto &val : v)
    {
        int y = __gcd(x, val);
        y = val / y;
        x *= y;
    }
    int sum = 0;
    vector<int> ans;
    for (auto &val : v)
    {
        sum += x / val;
        ans.push_back(x / val);
    }

    if (sum >= x)
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto &val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return;
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
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/