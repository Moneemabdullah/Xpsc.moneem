/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-28 21:43:20
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
    int t;
    cin >> t;
    int k = 1;
    int s = 2;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "##";
            else
                cout << "..";
        }
        cout << endl;
        for (int j = 0; j < t; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "##";
            else
                cout << "..";
        }
        cout << endl;
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