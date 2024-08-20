/*

         ####  ###  #   # #####        ##### ####  ##### #####
        #     #   # #   # #            #     #   # #     #
         ###  ##### #   # ####   AND   ####  ####  ####  ####
            # #   #  # #  #            #     #  #  #     #
        ####  #   #   #   #####        #     #   # ##### #####


        #####   ###   #      #####   ####  #####  ###  #   #  #####
        #   #  #   #  #      #      #        #     #   ##  #  #
        #####  #####  #      ####    ###     #     #   # # #  ####
        #      #   #  #      #          #    #     #   #  ##  #
        #      #   #  #####  #####  ####     #    ###  #   #  #####

*/
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-08-20 21:30:56
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

/*  --------------------SOLUTION PROGRAM-------------------------*/
int a[300001], cnt[300001], pos[300001];
bool vis[300001];
vector<int> test[300001];
void solve()
{
    int n, pt = 1e9;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        pos[i] = -1;
        cnt[i] = 0;
        vis[i] = false;
        test[i].clear();
    }
    for (int i = 1; i <= n; ++i)
    {
        pos[a[i]] = i;
        test[a[i]].push_back(i);
    }
    for (int i = 1; i <= n; ++i)
        if (pos[i] != -1)
        {
            cnt[pos[i]]++;
            pt = min(pt, pos[i]);
        }
    vector<int> res;
    for (int i = 1; i <= n;)
    {
        if (i == pt)
        {
            res.push_back(a[i]);
            cnt[pos[a[i]]]--;
            while (cnt[pt] == 0 && pt <= n)
                pt++;
            i++;
        }
        else
        {
            if (res.size() % 2 == 0)
            {
                int max_ = 0;
                for (int j = i; j <= min(pt, n); ++j)
                    if (!vis[j])
                        max_ = max(max_, a[j]);
                for (int j = i; j <= min(pt, n); ++j)
                    if (a[j] == max_)
                    {
                        i = j + 1;
                        break;
                    }
                if (max_ == 0)
                    break;
                res.push_back(max_);
                cnt[pos[max_]]--;
                while (cnt[pt] == 0 && pt <= n)
                    pt++;
            }
            else
            {
                int min_ = 1e9;
                for (int j = i; j <= min(pt, n); ++j)
                    if (!vis[j])
                        min_ = min(min_, a[j]);
                for (int j = i; j <= min(pt, n); ++j)
                    if (a[j] == min_)
                    {
                        i = j + 1;
                        break;
                    }
                if (min_ == 1e9)
                    break;
                res.push_back(min_);
                cnt[pos[min_]]--;
                while (cnt[pt] == 0 && pt <= n)
                    pt++;
            }
        }
        for (int i : test[res.back()])
            vis[i] = true;
    }
    cout << res.size() << endl;
    for (int i : res)
        cout << i << ' ';
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
        cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/