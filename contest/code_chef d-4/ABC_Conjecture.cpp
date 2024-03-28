/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-27 22:24:13
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
    int a1 = 0, b1 = 0, c1 = 0;
    int a2 = 0, b2 = 0, c2 = 0;

    string a;
    string b;
    cin >> a;
    cin >> b;

    for (auto x : a)
    {
        if (x == 'a')
        {
            a1++;
        }
        else if (x == 'b')
        {
            b1++;
        }
        else
        {
            c1++;
        }
    }
    for (auto x : b)
    {
        if (x == 'a')
        {
            a2++;
        }
        else if (x == 'b')
        {
            b2++;
        }
        else
        {
            c2++;
        }
    }

    if (a1 == a2 && b1 == b2 && c1 == c2)
    {
        yes
    }
    else
        no
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