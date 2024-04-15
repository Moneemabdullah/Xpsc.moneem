/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-14 23:26:23
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
    int n;
    cin >> n;

    string s;
    cin >> s;

    string b;
    for (int i = 0; i < n + 1; i++)
        b += '0';

    int cnt = 0;

    for (int i = 0; i <= (n - 1) / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            cnt++;
    }
    b[cnt] = '1';

    for (int i = cnt; i <= n - cnt; i += 2)
    {
        b[i] = '1';
        if (n % 2)
            b[i + 1] = '1';
    }
    for (auto i : b)
        cout << i;
    cout << '\n';
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