/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-29 20:31:52
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
    int s;
    cin >> s;

    vector<int> v(s);
    ll sum = 0;
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < s; i++)
    {
        sum += v[i];
    }

    if (sum % 2 == 0)
    {
        cout << s;
    }
    else
    {
        int l = 0;
        for (int i = 0; i < s; ++i)
        {
            if (v[i] & 1)
            {
                l = max(l, s - (i + 1));
                break;
            }
        }
        for (int i = s - 1; i >= 0; --i)
        {
            if (v[i] & 1)
            {
                l = max(l, i);
                break;
            }
        }
        cout << l;
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