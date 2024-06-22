/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-22 20:27:17
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

bool solve(int n, int mid, vector<int> &v, int c, int d)
{

    if (n > mid)
    {

        int time = d / (mid + 1);
        int x = d % (mid + 1);
        int sum = 0;
        for (int i = 0; i <= mid; i++)
        {
            sum += v[i];
        }

        sum = sum * time;
        for (int i = 0; i < x; i++)
        {
            sum += v[i];
        }

        if (sum >= c)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        int time = d / (mid + 1);
        int x = d % (mid + 1);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }

        sum = sum * time;
        for (int i = 0; i < min(x, n); i++)
        {
            sum += v[i];
        }

        if (sum >= c)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return true;
}
/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int val = v[n - 1] * d;

    if (c > val)
    {
        cout << "Impossible";
        return;
    }

    int mn = min(n, d);
    int ind = n - 1;
    int cost = 0;
    while (mn--)
    {
        cost += v[ind];
        ind--;
    }

    if (cost >= c)
    {
        cout << "Infinity";
        return;
    }

    reverse(v.begin(), v.end());

    int hi = d;
    int lo = 0;

    int ans = 0;
    while (hi >= lo)
    {
        int mid = (lo + hi) / 2;

        if (solve(n, mid, v, c, d) == true)
        {
            ans = mid;

            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    cout << ans;
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