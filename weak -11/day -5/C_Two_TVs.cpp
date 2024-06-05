/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-04 20:26:24
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
    int n;
    cin >> n;
    map<int, int> d;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    int sum = 0;
    bool ok = true;
    for (auto [idx, value] : d)
    {
        sum += value;
        if (sum > 2)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH
    solve();
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/