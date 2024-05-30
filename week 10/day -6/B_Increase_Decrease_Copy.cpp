/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-30 21:08:24
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
    ll n;
    cin >> n;

    vector<ll> a(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> b(n + 1, 0);

    for (ll i = 0; i < n + 1; i++)
    {
        cin >> b[i];
    }
    ll last = b.back();
    ll ans = 0;
    ll flag = 0;
    ll diff = 1e15;
    for (ll i = 0; i < n; i++)
    {

        ans += abs(a[i] - b[i]);
        if (last >= min(a[i], b[i]) and last <= max(a[i], b[i]))
        {
            flag = 1;
        }
        diff = min(diff, abs(a[i] - last));
        diff = min(diff, abs(b[i] - last));
    }
    if (flag)
    {
        ans++;
        cout << ans;
    }
    else
    {
        ans += diff + 1;
        cout << ans;
    }
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