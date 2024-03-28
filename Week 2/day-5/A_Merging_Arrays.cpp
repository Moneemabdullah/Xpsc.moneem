/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-27 14:30:07
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
    int a, b;
    cin >> a >> b;
    vector<int> x(a), y(b);
    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> y[i];
    }

    int i = 0, j = 0;

    while (i < a && j < b)
    {
        if (x[i] < y[j])
        {
            cout << x[i++] << " ";
        }
        else if (y[j] < x[i])
        {
            cout << y[j++] << " ";
        }
        else
        {
            cout << x[i++] << " " << y[j++] << " ";
        }
    }

    while (j < b)
    {
        cout << y[j++] << " ";
    }
    while (i < a)
    {
        cout << x[i++] << " ";
    }
    cout << endl;
}
/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << "Case #" << t++ << ": ";
    solve();
}
/* -----------------END OF PROGRAM --------------------*/