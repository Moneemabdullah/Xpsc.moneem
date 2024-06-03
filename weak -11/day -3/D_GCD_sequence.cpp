/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-03 21:53:29
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
int gcd(int a, int b)
{
    return __gcd(a, b);
}
bool remove_order(vector<int> &a)
{
    int n = a.size();
    vector<int> gcd_cnt(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        gcd_cnt[i] = gcd(a[i], a[i + 1]);
    }
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (gcd_cnt[i] > gcd_cnt[i + 1])
        {
            cnt++;
            if (cnt > 1)
                return false;
        }
    }
    return true;
}
void solve()
{
    /*Lets play*/
    int s;
    cin >> s;
    vector<int> a(s);
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    bool remove = true;

    int n = a.size();
    vector<int> gcd_cnt(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        gcd_cnt[i] = gcd(a[i], a[i + 1]);
    }
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (gcd_cnt[i] > gcd_cnt[i + 1])
        {
            cnt++;
            if (cnt > 1)
            {
                remove = false;
            }
        }
    }

    if (remove)
        cout << "YES";
    else
        cout << "NO";
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