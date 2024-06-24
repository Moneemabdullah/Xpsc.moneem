/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-03 21:06:09
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
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int favorite_value = a[f - 1];
    sort(a.rbegin(), a.rend());

    int count_greater = 0, count_equal = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > favorite_value)
        {
            count_greater++;
        }
        else if (a[i] == favorite_value)
        {
            count_equal++;
        }
    }

    if (count_greater >= k)
    {
        cout << "NO";
    }
    else if (count_greater + count_equal <= k)
    {
        cout << "YES";
    }
    else
    {
        cout << "MAYBE";
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