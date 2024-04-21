/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-21 22:15:48
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
    ll n;
    cin >> n;
    string s, ret = "";
    cin >> s;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        char k = s[i];
        ll num;
        stringstream ss;
        if (k == '0')
        {
            ss << s[i - 1];
            ss >> num;
            if (s[i - 2] == '1')
                num += 10;
            else if (s[i - 2] == '2')
                num += 20;
            i -= 2;
        }
        ss << s[i];
        ss >> num;
        num--;
        char ii = 'a';
        while (num != 0)
        {
            num--;
            ii++;
        }
        ret += ii;
    }
    string rev = string(ret.rbegin(), ret.rend());
    cout << rev << endl;
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