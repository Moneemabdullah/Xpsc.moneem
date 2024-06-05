/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-05 22:14:58
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
    int s;
    cin >> s;
    vector<int> pos(s);
    vector<int> pow(s);
    for (int i = 0; i < s; i++)
    {
        cin >> pos[i];
    }
    for (int i = 0; i < s; i++)
    {
        cin >> pow[i];
    }
    int l1 = 0, l2 = 0, r1 = s - 1, r2 = s - 1;

    for (int i = 0; i < s - 1; i++)
    {
        if (pos[i] + pow[i] >= pos[i + 1])
        {
            l1 = i + 1;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < s - 1; i++)
    {
        if (pos[i] + pow[i + 1] >= pos[i + 1])
        {
            l2 = i + 1;
        }
        else
        {
            break;
        }
    }
    for (int i = s - 1; i > 0; i--)
    {
        if (pos[i] - pow[i] <= pos[i - 1])
        {
            r1 = i - 1;
        }
        else
        {
            break;
        }
    }
    for (int i = s - 1; i > 0; i--)
    {
        if (pos[i] - pow[i - 1] <= pos[i - 1])
        {
            r2 = i - 1;
        }
        else
        {
            break;
        }
    }

    if (max(l1, r2) + 1 >= min(l2, r1))
    {
        yes;
    }
    else
    {
        no;
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
