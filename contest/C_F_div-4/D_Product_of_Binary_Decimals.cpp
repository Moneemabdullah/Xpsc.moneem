/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-28 22:45:49
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

bool Binary(int num)
{
    string t = to_string(num);
    for (char x : t)
    {
        if (x != '0' && x != '1')
        {
            return false;
        }
    }
    return true;
}

bool Decimals(int n)
{

    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            int q = n / i;
            if (Binary(q) && Binary(i))
            {
                return true;
            }
        }
    }

    return false;
}
void solve()
{
    /* Lets GO */
    int n;

    cin >> n;
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (Decimals(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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