/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-29 22:02:58
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
    /* Lets GO */
    int count, q;
    cin >> count >> q;

    vector<int> v(count);

    for (int i = 0; i < count; i++)
    {
        cin >> v[i];
    }

    vector<int> pr(count + 1);
    vector<int> su(count + 1);
    pr[0] = 0;
    su[count] = 0;
    for (int i = 1; i <= count; i++)
    {
        pr[i] = pr[i - 1] + v[i - 1];
    }
    for (int i = count - 1; i >= 0; i--)
    {
        su[i] = su[i + 1] + v[i];
    }

    while (q--)
    {
        int a, b, val;
        cin >> a >> b >> val;

        int total = pr[a - 1] + su[b] + ((b - a) + 1) * val;

        if (total & 1)
            yes else no
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
