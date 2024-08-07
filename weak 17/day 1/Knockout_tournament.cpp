/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-08-07 20:52:28
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

    vector<pair<int, int>> vec(16);
    for (int i = 0; i < 16; i++)
    {
        cin >> vec[i].first;
        vec[i].second = i;
    }

    sort(vec.begin(), vec.end());

    vector<int> ans(16);
    for (int i = 0; i < 16; i++)
    {
        if (i == 0)
        {
            ans[vec[i].second] = 0;
        }
        else if (i <= 2)
        {
            ans[vec[i].second] = 1;
        }
        else if (i <= 6)
        {
            ans[vec[i].second] = 2;
        }
        else if (i <= 14)
        {
            ans[vec[i].second] = 3;
        }
        else
        {
            ans[vec[i].second] = 4;
        }
    }

    for (int i = 0; i < 16; i++)
    {
        cout << ans[i] << " ";
    }
    endl;
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