/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-27 20:05:50
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
string decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    string ans;
    for (int i = 64; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}
void solve()
{
    /* Lets GO */
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> m(64);
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        string s = decToBinary(v[i]);
        for (int j = 0; j < 64; j++)
        {
            if (s[j] != '0')
                m[j]++;
        }
    }
    for (int i = 0; i < 64; i++)
        g = __gcd(g, m[i]);
    for (int i = 1; i <= n; i++)
    {
        if (g % i == 0)
            cout << i << ' ';
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