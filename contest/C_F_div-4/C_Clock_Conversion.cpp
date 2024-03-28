/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-28 21:46:51
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
    char x;
    cin >> a >> x >> b;
    if (a == 0 && a != 12)
    {
        a = 12;
        cout << setw(2) << setfill('0') << a << x << setw(2) << setfill('0') << b << " " << "AM" << endl;
    }
    else if (a == 12 && a != 0)
    {
        a = 12;
        cout << setw(2) << setfill('0') << a << x << setw(2) << setfill('0') << b << " " << "PM" << endl;
    }
    else if (a < 12 && a != 0)
    {
        a = a;
        b = b;
        cout << setw(2) << setfill('0') << a << x << setw(2) << setfill('0') << b << " " << "AM" << endl;
    }
    else if (a > 12 && a != 0)
    {
        a = a - 12;
        b = b;
        cout << setw(2) << setfill('0') << a << x << setw(2) << setfill('0') << b << " " << "PM" << endl;
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