/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-26 20:48:21
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
    int x;
    cin >> x;
    vector<int> ans;
    int flag = 0;
    while (x > 0)
    {
        if (x & 1)
        {
            ans.push_back(1);
            x--;
        }
        else
        {
            int i = 0;
            for (; i < 32; i++)
            {
                if (pow(2, i) <= x)
                {
                    flag = i;
                    break;
                }
            }
            x - pow(2, i);
        }
    }
    for (int i = 0; i < flag - 1; i++)
    {
        ans.push_back(0);
    }
    ans.push_back(1);

    for (auto x : ans)
        cout << x;
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