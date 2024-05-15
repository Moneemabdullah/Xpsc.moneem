/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-15 21:07:24
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

void s()
{
    int a;
    cin >> a;
    string s;
    cin >> s;

    int ans = 1;

    for (int i = 1; i < a; i++)
    {
        if (s[i] == s[i - 1])
        {
            s[i] = '*';
        }
        else
        {
            ans++;
        }
    }

    cout << ans << endl;
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
        s();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
