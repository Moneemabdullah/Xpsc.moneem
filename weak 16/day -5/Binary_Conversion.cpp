/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-07-17 20:57:59
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
void solve()
{
    int n, f;
    cin >> n >> f;
    string binaryStringA, binaryStringB;
    cin >> binaryStringA >> binaryStringB;
    if (binaryStringA == binaryStringB && (binaryStringA == "01" || binaryStringA == "10") && f % 2 == 1)
    {
        cout << "NO";
        return;
    }
    int mismatchCount = 0, flipCount = 0, equalCount = 0;
    for (auto i = 0; i < n; i++)
    {
        if (binaryStringA[i] != binaryStringB[i])
        {
            mismatchCount++;
            flipCount += binaryStringA[i] - '0';
        }
        else
        {
            equalCount++;
        }
    }
    if (mismatchCount == 2 && n == 2 && f % 2 == 0)
    {
        cout << "NO";
        return;
    }
    if (mismatchCount == flipCount * 2 && flipCount <= f)
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