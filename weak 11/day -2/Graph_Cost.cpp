/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-01 20:23:56
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
    /* Lets GO */
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    stack<int> value;
    stack<int> index;
    long long total_cost = 0;

    for (int i = 0; i < n; i++)
    {
        while (value.size() > 1 && value.top() > a[i])
        {
            int cur = value.top();
            value.pop();
            if (cur >= value.top())
            {
                index.pop();
            }
            else
            {
                value.push(cur);
                break;
            }
        }
        value.push(a[i]);
        index.push(i);
    }

    int last_item = value.top();
    value.pop();
    int last_index = index.top();
    index.pop();

    while (!index.empty())
    {
        total_cost += max(last_item, value.top()) * (last_index - index.top());
        last_item = value.top();
        value.pop();
        last_index = index.top();
        index.pop();
    }
    cout << total_cost;
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