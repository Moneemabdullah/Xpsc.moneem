#include <bits/stdc++.h>
using namespace std;

long long N = 10e7 + 2;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

vector<bool> prime(N, true);

bool ispr(int n)
{
    if (n < 2)
    {
        /* code */
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
void solve()
{
    ll n;
    cin >> n;

    ll ans = 0;
    string a = bitset<40>(n).to_string();
    for (auto x : a)
    {
        if (x == '1')
        {
            ans++;
        }
    }
    if (ispr(ans) && prime[ans])
    {
        cout << "Binary prime" << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    prime[1] = false;
    for (ll i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= N; j += j)
            {
                prime[j] = false;
            }
        }
    }

    int tc;
    cin >> tc;
    // int t = 1;
    for (ll i = 0; i < tc; i++)
    {
        solve();
    }
    return 0;
}
