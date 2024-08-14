/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-08-13 21:55:23
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
#define no cout << "NO"
#define yes cout << "YES"
#define endl cout << "\n"
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        string s;
        cin >> s;

        if (s.size() != n)
        {
            cout << "NO\n";
            continue;
        }

        unordered_map<int, char> num_to_char;
        unordered_map<char, int> char_to_num;
        bool matches = true;

        for (int i = 0; i < n; ++i)
        {
            int num = a[i];
            char ch = s[i];

            if (num_to_char.count(num))
            {
                if (num_to_char[num] != ch)
                {
                    matches = false;
                    break;
                }
            }
            else
            {
                num_to_char[num] = ch;
            }

            if (char_to_num.count(ch))
            {
                if (char_to_num[ch] != num)
                {
                    matches = false;
                    break;
                }
            }
            else
            {
                char_to_num[ch] = num;
            }
        }

        if (matches)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    BISMILLAH
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}