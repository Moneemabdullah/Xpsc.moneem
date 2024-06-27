/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-27 21:22:27
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
#define vi vector<long long>
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
void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    vi b(n);
    read(a);
    read(b);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans1 = 0;
    ll ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            if (a[i] > 0)
            {
                if (ans1 > ans2)
                {
                    ans2 += a[i];
                }
                else
                {
                    ans1 += a[i];
                }
            }
            else if (a[i] < 0)
            {
                if (ans1 < ans2)
                {
                    ans2 += a[i];
                }
                else
                {
                    ans1 += a[i];
                }
            }
        }
        else if (a[i] > b[i])
        {
            if (a[i] > 0)
            {
                if (ans1 > ans2)
                {
                    ans2 += a[i];
                }
                else
                {
                    ans1 += a[i];
                }
            }
            // else if (a[i] < 0)
            // {
            //     if (ans1 <= ans2)
            //     {
            //         ans2 += a[i];
            //     }
            //     else
            //     {
            //         ans1 += a[i];
            //     }
            // }
        }
        else if (a[i] < b[i])
        {
            if (b[i] > 0)
            {
                if (ans1 > ans2)
                {
                    ans2 += b[i];
                }
                else
                {
                    ans1 + b[i];
                }
            }
            // else if (b[i] < 0)
            // {
            //     if (ans1 <= ans2)
            //     {
            //         ans2 += b[i];
            //     }
            //     else
            //     {
            //         ans1 += b[i];
            //     }
            // }
        }
        else if (a[i] < b[i])
        {
            // if (a[i] > 0)
            // {
            //     if (ans1 >= ans2)
            //     {
            //         ans2 += a[i];
            //     }
            //     else
            //     {
            //         ans1 += a[i];
            //     }
            // }
            if (a[i] < 0)
            {
                if (ans1 < ans2)
                {
                    ans2 += a[i];
                }
                else
                {
                    ans1 += a[i];
                }
            }
        }
        else if (a[i] > b[i])
        {
            // if (b[i] > 0)
            // {
            //     if (ans1 >= ans2)
            //     {
            //         ans2 += b[i];
            //     }
            //     else
            //     {
            //         ans1 += b[i];
            //     }
            // }
            if (b[i] < 0)
            {
                if (ans1 < ans2)
                {
                    ans2 += b[i];
                }
                else
                {
                    ans1 += b[i];
                }
            }
        }
    }
    cout << ans1 << " " << ans2;
    endl;
    cout << min(ans1, ans2);
}

void rsolve()
{
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    read(a);
    read(b);

    ll ans1 = 0, ans2 = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= b[i])
        {
            if (ans1 > ans2)
                ans2 += a[i];
            else
                ans1 += a[i];
        }
        else
        {
            if (ans1 > ans2)
                ans2 += b[i];
            else
                ans1 += b[i];
        }
    }
    // cout << ans1 << " " << ans2;
    // endl;
    cout << min(ans1, ans2);
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
        // solve();
        rsolve();
        cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/