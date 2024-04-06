/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-30 15:01:37
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
    // cout << s;
    vector<string> m(s);
    map<string, bool> mp;
    for (int i = 0; i < s; i++)
    {
        string a;
        cin >> a;
        m[i] = a;
        mp[a] = true;
    }

    for (int j = 0; j < s; j++)
    {
        bool flag = false;
        for (int i = 1; i < m[j].size(); i++)
        {
            string s1 = m[j].substr(0, i);
            string s2 = m[j].substr(i, m[j].size() - 1);
            if (mp[s1] && mp[s2])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }

    cout << endl;
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