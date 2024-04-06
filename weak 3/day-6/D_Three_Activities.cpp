/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-04 00:06:31
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
#define mp make_pair
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    int s;
    cin >> s;
    vector<ll> a(s), b(s), c(s);
    vector<pair<ll, ll>> pa, pb, pc;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
        pa.push_back(mp(a[i], i));
    }

    for (int i = 0; i < s; i++)
    {
        cin >> b[i];
        pb.push_back(mp(b[i], i));
    }

    for (int i = 0; i < s; i++)
    {
        cin >> c[i];
        pc.push_back(mp(c[i], i));
    }

    sort(pa.begin(), pa.end(), greater<>());
    sort(pb.begin(), pb.end(), greater<>());
    sort(pc.begin(), pc.end(), greater<>());

    ll ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (pa[i].second != pb[j].second and pa[i].second != pc[k].second and pb[j].second != pc[k].second)
                {
                    ans = max((pa[i].first + pb[j].first + pc[k].first), ans);
                }
            }
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
    while (tc--)
    {
        solve();
    }
    return 0;
}
