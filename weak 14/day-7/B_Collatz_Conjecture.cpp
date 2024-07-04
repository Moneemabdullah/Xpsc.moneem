/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-07-04 20:45:31
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
using set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int MAX_N = 1e5 + 5;

#define ll long long
#define pb push_back
#define no cout << "NO"
#define yes cout << "YES"
#define endl cout << "\n"
#define PI 3.1415926535897932384626433832795
#define vi vector<int>
#define read(a)       \
    for (auto &i : a) \
    cin >> i

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

/* PRINTS */
template <class T>
void print_v(vector<T> &v)
{
    cout << "{";
    for (auto x : v)
        cout << x << ",";
    cout << "\b}";
}

/*  --------------------SOLUTION PROGRAM-------------------------*/

/* Lets GO */
void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    ll r = x % y;
    r = y - r;

    if (k < r)
    {
        cout << x + k;
        return;
    }
    if (k == r)
    {
        x += k;
        while (x % y == 0)
        {
            x /= y;
        }
        cout << x;
        return;
    }

    while (true)
    {
        ll e = r;
        if (x == 1)
        {
            break;
        }
        if (k >= e)
        {
            k -= e;
            x += e;
            while (x % y == 0)
            {
                x /= y;
            }
            r = y - x % y;
        }
        else
        {
            x += k;
            k = 0;
            break;
        }
    }
    if (k != 0)
        cout << k % (y - 1) + 1;
    else
        cout << x;
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << tc++ << ": ";
        solve();
        cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/