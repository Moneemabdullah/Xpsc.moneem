/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-05 21:28:48
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
const int MAX_N = 1e7 + 5;

#define ll long long
#define pb push_back
#define no cout << "NO"
#define yes cout << "YES"
#define PI 3.1415926535897932384626433832795

ll maxdifference(int n, int k, vector<int> &a)
{

    ll initial_sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        initial_sum += abs(a[i] - a[i + 1]);
    }
    ll max_sum = initial_sum;

    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {

            ll new_sum = initial_sum - abs(a[i] - a[i - 1]) + abs(1 - a[i - 1]);
            if (i < n - 1)
            {
                new_sum -= abs(a[i] - a[i + 1]);
                new_sum += abs(1 - a[i + 1]);
            }
            max_sum = max(max_sum, new_sum);
        }

        if (i < n - 1)
        {
            // Change a[i] to K and calculate the new sum
            ll new_sum = initial_sum - abs(a[i] - a[i + 1]) + abs(k - a[i + 1]);
            if (i > 0)
            {
                new_sum -= abs(a[i] - a[i - 1]);
                new_sum += abs(k - a[i - 1]);
            }
            max_sum = max(max_sum, new_sum);
        }
    }

    return max_sum;
}
void solve()
{

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int j = 0; j < n; ++j)
    {
        cin >> a[j];
    }
    cout << maxdifference(n, k, a) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}