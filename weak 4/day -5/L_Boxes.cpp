/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-17 22:54:33
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
    int n;
    cin >> n;
    long long a[n], x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    x = *max_element(a, a + n);
    int cnt1 = 0, cnt2 = 0;
    while (x > 0)
    {
        x /= 2;
        cnt1++;
    }
    y = pow(2, cnt1 - 1);
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= y)
            cnt2++;
    }
    if (cnt2 % 2 == 1)
        cout << (cnt2 / 2) + 1 << endl;
    else
        cout << cnt2 / 2 << endl;
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