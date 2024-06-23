/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-06-23 22:12:32
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

// template <typename T>
// using set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int MAX_N = 1e5 + 5;

#define ll long long
#define pb push_back
#define no cout << "NO"
#define yes cout << "YES"

#define PI 3.1415926535897932384626433832795
#define vi vector<int>
#define read(a)       \
    for (auto &i : a) \
    cin >> i

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

/* PRINTS */
template <class T>
void print_v(vector<T> &v)
{
    cout << "{";
    for (auto x : v)
        cout << x << ",";
    cout << "\b}";
}

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    int length_s, num_updates;
    cin >> length_s >> num_updates;

    string original;
    cin >> original;

    vector<int> indices(num_updates);
    for (int &index : indices)
    {
        cin >> index;
    }

    string update;
    cin >> update;

    set<int> unique(indices.begin(), indices.end());
    vector<int> sorted(unique.begin(), unique.end());
    sort(sorted.begin(), sorted.end());

    sort(update.begin(), update.end());

    map<int, char> index_to_char;
    for (size_t i = 0; i < sorted.size(); ++i)
    {
        index_to_char[sorted[i]] = update[i];
    }

    for (const auto &pair : index_to_char)
    {
        original[pair.first - 1] = pair.second;
    }

    cout << original << endl;
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << tc++ << ": ";
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
