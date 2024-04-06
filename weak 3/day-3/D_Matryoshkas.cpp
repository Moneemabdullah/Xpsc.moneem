/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-01 14:02:55
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
    int s;
    cin >> s;
    int div = 0;
    vpi vp;
    vector<int> ar;
    for (int i = 0; i < s; i++)
    {
        int val;
        cin >> val;
        ar.pb(val);
    }

    sort(ar.begin(), ar.end());
    reverse(ar.begin(), ar.end());

    for (int i = 0; i < s;)
    {
        int j = i;
        while (ar[i] == ar[j] && i < s)
        {
            i++;
        }
        vp.push_back({ar[j], i - j});
    }
    div = vp[0].second;
    for (int i = 1; i < vp.size(); i++)
    {
        if (vp[i].first + 1 == vp[i - 1].first)
        {
            div = div + max(vp[i].second - vp[i - 1].second, 0);
        }
        else
        {
            div += vp[i].second;
        }
    }
    cout << div << endl;
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
