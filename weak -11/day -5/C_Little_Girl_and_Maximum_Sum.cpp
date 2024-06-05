/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-04 20:06:21
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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> d(n + 1);
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }

    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (1LL * d[i] * a[i]);
    }
    cout << ans;
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH
    solve();
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/