/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-08 21:33:29
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
    int n, a, b;
    cin >> n >> a >> b;
    vector<ll> ar(n * n);
    for (int i = 0; i < n * n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    vector<ll> br;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            br.pb(ar[0] + i * a + j * b);
        }
    }

    sort(br.begin(), br.end());
    if (ar == br)
    {
        yes
    }
    else
        no
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
