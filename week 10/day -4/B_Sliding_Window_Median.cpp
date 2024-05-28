/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-26 20:13:53
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
    int s, k;
    cin >> s >> k;
    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    pbds<pair<int, int>> p;
    while (r < s)
    {
        p.insert({v[r], r});
        if (r - l + 1 == k)
        {
            int pos = k / 2;
            if (k % 2 == 0)
            {
                pos--;
            }
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({v[l], l});
            l++;
        }
        r++;
    }
}
/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH
    solve();
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/