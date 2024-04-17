/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-17 20:41:53
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
int rev(int x)
{
    int reversed_number = 0, remainder;
    while (x != 0)
    {
        remainder = x % 10;
        reversed_number = reversed_number * 10 + remainder;
        x /= 10;
    }
    return reversed_number;
}
void solve()
{
    /* Lets GO */
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        if (rev(a) > b)
        {
            cout << "Yes" << endl;
        }
        else if (rev(a) > rev(b))
        {
            /* code */
            cout << "Yes" << endl;
        }
        else if (a > rev(b))
        {
            /* code */
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
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