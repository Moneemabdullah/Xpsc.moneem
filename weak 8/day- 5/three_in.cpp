/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-15 21:50:10
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    multiset<int> hi, lo;
    int sum_hi = 0, sum_lo = 0;

    for (int i = 0; i < n; ++i)
    {
        if (i & 1)
        {
            if (a[i] > *hi.begin())
            {
                sum_hi += a[i] - *hi.begin();
                sum_lo += *hi.begin();
                lo.insert(*hi.begin());
                hi.insert(a[i]);
                hi.erase(hi.begin());
            }
            else
            {
                lo.insert(a[i]);
                sum_lo += a[i];
            }
        }
        else
        {
            if (lo.empty())
            {
                hi.insert(a[i]);
                sum_hi += a[i];
            }
            else if (a[i] < *lo.rbegin())
            {
                sum_hi += *lo.rbegin();
                sum_lo += a[i] - *lo.rbegin();
                hi.insert(*lo.rbegin());
                lo.insert(a[i]);
                lo.erase(lo.find(*lo.rbegin()));
            }
            else
            {
                hi.insert(a[i]);
                sum_hi += a[i];
            }
            cout << sum_hi - sum_lo << " ";
        }
    }
    cout << "\n";
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    // int t = 1;
    while (tc--)
    {
        // cout << "Case #" << t++ << ": ";
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/