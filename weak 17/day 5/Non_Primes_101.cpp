/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-08-14 21:11:44
*/

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define BISMILLAH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MAX_N = 1e5 + 5;

#define ll long long
#define pb push_back
#define F first
#define S second
#define no cout << "NO"
#define yes cout << "YES"
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define vi vector<int>
#define vll vector<long long>
#define pura(a) (a).begin(), (a).end()
#define u_pura(a) (a).rbegin(), (a).rend()

#define vin(a)         \
    for (auto &it : a) \
        cin >> it;
#define vout(a)            \
    for (auto &it : a)     \
        cout << it << " "; \
    cout << "\n";

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

/* PRINTS */
template <class T>
void print_v(vector<T> &v)
{
    cout << "{";
    for (auto x : v)
        cout << x << ",";
    cout << "\b}";
}

vector<bool> prime(201, true);

void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 200; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 200; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void solve()
{
    int s;
    cin >> s;

    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }

    unordered_map<int, vector<int>> indices;
    for (int i = 0; i < s; i++)
    {
        indices[v[i]].push_back(i + 1);
    }

    for (auto [val1, idxs1] : indices)
    {
        for (auto [val2, idxs2] : indices)
        {
            if (val1 < val2)
            {
                int sum = val1 + val2;
                if (!prime[sum])
                {
                    cout << idxs1[0] << " " << idxs2[0];
                    return;
                }
            }
            else if (val1 == val2 && idxs1.size() > 1)
            {
                int sum = val1 + val2;
                if (!prime[sum])
                {
                    cout << idxs1[0] << " " << idxs1[1];
                    return;
                }
            }
        }
    }

    cout << -1;
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH
    sieve();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << tc++ << ": ";
        solve();
        cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/