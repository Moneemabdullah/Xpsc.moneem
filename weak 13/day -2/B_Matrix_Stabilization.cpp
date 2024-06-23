/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-23 21:02:50
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
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(ll x, ll y, int n, int m)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

void solve()
{
    /* Lets GO */
    int n, m;
    cin >> n >> m;
    int ar[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vector<int> a;
            for (int k = 0; k < 4; k++)
            {
                if (valid(i + d[k].first, j + d[k].second, n, m))
                {
                    a.push_back(ar[i + d[k].first][j + d[k].second]);
                }
            }
            sort(a.begin(), a.end());

            if (ar[i][j] > a[a.size() - 1])
            {
                ar[i][j] = a[a.size() - 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
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