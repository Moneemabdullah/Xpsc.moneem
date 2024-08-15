/*

     ####   ###   #   #  #####
    #      #   #  #   #  #
     ###   #####  #   #  ####
        #  #   #   # #   #
    ####   #   #    #    #####


    #####   ###   #      #####   ####  #####  ###  #   #  #####
    #   #  #   #  #      #      #        #     #   ##  #  #
    #####  #####  #      ####    ###     #     #   # # #  ####
    #      #   #  #      #          #    #     #   #  ##  #
    #      #   #  #####  #####  ####     #    ###  #   #  #####


*/
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-08-15 21:50:57
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
#define F first
#define S second
#define no cout << "NO"
#define yes cout << "YES"
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define vi vector<int>
#define vll vector<long long>
#define pura(a) (a).begin(), (a).end()
#define u_pura(a) (a).rbegin(), (a).rend()

#define vin(a)         \
    for (auto &it : a) \
        cin >> it;
#define vout(a)            \
    for (auto &it : a)     \
        cout << it << " "; \
    cout << "\n";

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

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
void solve()
{
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    vector<int> d(105, 0);
    int v = min(r, R) - max(l, L);

    if (l < L)
        d[L - 1] = true;
    if (L < l)
        d[l - 1] = true;
    if (R > r)
        d[r] = true;
    if (r > R)
        d[R] = true;

    int ans = 0;
    for (int i = 1; i <= 101; i++)
    {
        ans += d[i];
    }

    if (v < 0)
        ans = 0;
    cout << max(1, ans + max(0, min(r, R) - max(l, L)));
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
