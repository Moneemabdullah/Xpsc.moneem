/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-07-07 20:58:13
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
#define no cout << "NO\n"
#define yes cout << "YES\n"
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
void solve()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];
    int b[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char value;
            cin >> value;
            a[i][j] = value - '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char value;
            cin >> value;
            b[i][j] = value - '0';
        }
    }
    bool flag = true;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = m - 1; j >= 1; j--)
        {
            if (a[i][j] != b[i][j])
            {
                int diff = (b[i][j] - a[i][j] + 3) % 3;
                a[i][j] = b[i][j];
                a[i - 1][j] = (a[i - 1][j] + 2 * diff) % 3;
                a[i][j - 1] = (a[i][j - 1] + 2 * diff) % 3;
                a[i - 1][j - 1] = (a[i - 1][j - 1] + diff) % 3;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i][0] != b[i][0])
        {
            no;
            return;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (a[0][i] != b[0][i])
        {
            no;
            return;
        }
    }

    yes;
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
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
