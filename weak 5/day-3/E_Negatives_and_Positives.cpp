/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-22 22:02:59
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

int rev(int a)
{
    if (a > 0)
    {
        return 0 - a;
    }
    else
    {
        return abs(0 + a);
    }
}

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    ll pos = 0, neg = 0ll;
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
        if (i > 0)
            ++pos;
        else
            ++neg;
    }
    if (pos == n)
        cout << sum << endl;
    else
    {
        sort(a.begin(), a.end());
        sum = 0ll;
        for (ll i = 1; i < n; ++i)
        {
            if (a[i] + a[i - 1] < 0)
            {
                a[i] = -a[i];
                a[i - 1] = -a[i - 1];
            }
        }
        for (auto i : a)
            sum += i;
        cout << sum << endl;
    }
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