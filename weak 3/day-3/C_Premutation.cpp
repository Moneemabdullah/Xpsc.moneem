/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-31 11:22:06
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define all(x) x.begin(), x.end()
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define pi pair<int, int>
bool compare(pi x, pi y)
{
    return x.second < y.second;
}

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{

    long long n;
    cin >> n;
    vector<vector<long long>> vi;
    map<long long, long long> ans;

    for (int i = 0; i < n; i++)
    {
        vector<long long> temp;
        for (auto j = 0; j < n - 1; j++)
        {
            long long x;
            cin >> x;
            temp.pb(x);

            if (j == 0)
            {
                if (ans.find(x) == ans.end())
                {
                    ans[x] = 1;
                }
                else
                {
                    ans[x]++;
                }
            }
        }
        vi.pb(temp);
    }

    auto minV = *min_element(all(ans), compare);
    auto maxV = *max_element(all(ans), compare);

    vector<long long> vians;
    for (auto i = 0; i < n; i++)
    {
        if (vi[i][0] == minV.first)
        {
            vians.pb(maxV.first);
            for (auto val : vi[i])
            {
                vians.pb(val);
            }
            break;
        }
    }

    for (int i = 0; i < vians.size(); i++)
    {
        cout << vians[i] << ' ';
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