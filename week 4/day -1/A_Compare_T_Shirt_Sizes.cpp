/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-05 19:27:44
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
    string a, b;
    cin >> a >> b;

    map<char, int> ax;
    map<char, int> bx;

    for (char x : a)
    {
        ax[x]++;
    }
    for (char x : b)
    {
        bx[x]++;
    }

    if (a == b)
    {
        cout << "=" << endl;
    }
    else if (a.back() == 'S' and b.back() == 'M')
    {
        cout << "<" << endl;
    }
    else if (a.back() == 'M' and b.back() == 'S')
    {
        cout << ">" << endl;
    }
    else if (a.back() == 'L' and b.back() == 'S')
    {
        cout << ">" << endl;
    }
    else if (a.back() == 'S' and b.back() == 'L')
    {
        cout << "<" << endl;
    }
    else if (a.back() == 'M' and b.back() == 'L')
    {
        cout << "<" << endl;
    }
    else if (a.back() == 'L' and b.back() == 'M')
    {
        cout << ">" << endl;
    }
    else
    {
        if (a.back() == 'S' and b.back() == 'S')
        {
            /* code */
            if (ax['X'] < bx['X'])
            {
                cout << ">" << endl;
            }
            else if (ax['X'] > bx['X'])
            {
                cout << "<" << endl;
            }
        }
        else if (a.back() == 'L' and b.back() == 'L')
        {
            /* code */
            if (ax['X'] > bx['X'])
            {
                cout << ">" << endl;
            }
            else if (ax['X'] < bx['X'])
            {
                cout << "<" << endl;
            }
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
