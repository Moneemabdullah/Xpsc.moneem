/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-05 21:05:56
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
// void solve()
// {
//     /* Lets GO */
//     int s;
//     cin >> s;

//     vector<int> v(s);
//     vector<int> p(s);
//     vector<int> a(s);
//     for (int i = 0; i < s; i++)
//     {
//         cin >> v[i] >> p[i];
//         a[i] = v[i] + p[i];
//     }
//     // for (int i = 0; i < s; i++)
//     // {
//     //     cout << v[i] << p[i] << a[i] << endl;
//     // }

//     int a1 = 0, b1 = 0;
//     int x = 0;
//     for (int i = 0; i < s; i++)
//     {
//         if (a[i] > x)
//         {
//             x = a[i];
//             a1 = v[i];
//             b1 = p[i];
//         }
//     }
//     int a2 = 0, b2 = 0;
//     int y = 0;
//     for (int i = 0; i < s; i++)
//     {
//         if (a[i] > y && i != y && y != a[i])
//         {
//             y = a[i];
//             a2 = v[i];
//             b2 = p[i];
//         }
//     }
//     cout << (a2 * b1) + (a1 * b2);
// }
void solve()
{
    int s;
    cin >> s;

    vector<int> v(s);
    vector<int> p(s);
    // vector<int> a(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i] >> p[i];
        // a[i] = v[i] + p[i];
    }
    int ans = 0;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i != j)
            {
                ans = max(ans, (v[i] * p[j]) + (v[j] * p[i]));
            }
        }
    }
    cout << ans;
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