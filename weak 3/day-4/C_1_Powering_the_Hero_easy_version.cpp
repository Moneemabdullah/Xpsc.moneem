/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-02 09:33:09
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;
#define ll long long
/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    ll count;
    cin >> count;
    priority_queue<ll> q;
    vector<ll> v;
    ll ans = 0;
    for (int i = 0; i < count; i++)
    {
        ll val;
        cin >> val;
        if (val != 0)
        {
            q.push(val);
        }

        if (val == 0 && !q.empty())
        {
            ans += q.top();
            q.pop();
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
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/