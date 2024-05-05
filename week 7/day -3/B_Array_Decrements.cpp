/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-05 19:31:52
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
    vector<int> a(s);
    vector<int> b(s);
    int dif = 0;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < s; i++)
    {
        cin >> b[i];
        dif = max(dif, a[i] - b[i]);
    }

    for (int i = 0; i < s; i++)
    {
        if (a[i] - dif < b[i] && b[i] != 0)
        {
            no return;
        }
    }
    yes
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