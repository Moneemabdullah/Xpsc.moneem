/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-26 23:10:51
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

bool ch(vector<ll> v, int x)
{
    int n = v.size(), i = 0, j = n - 1;

    while (i < j)
    {
        if (v[i] == x)
            i++;
        else if (v[j] == x)
            j--;
        else if (v[i] != v[j])
            return false;
        else
            i++, j--;
    }

    return true;
}

void solve()
{
    /* Lets GO */
    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    bool flag = true;

    for (int i = 0; i < n - 1 - i; ++i)
        if (v[i] != v[n - 1 - i])
        {
            flag = ch(v, v[i]) or ch(v, v[n - 1 - i]);
            break;
        }

    if (flag)
        yes else no
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