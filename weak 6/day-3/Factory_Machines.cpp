/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-28 22:24:44
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl
#define ll long long

int main()
{
    int n = 0;
    ll t = 0;
    cin >> n >> t;
    vector<ll> time;
    time.reserve(n);
    ll input = 0;
    while (cin >> input)
        time.push_back(input);
    ll low = 0;
    ll high = (1e18);
    ll time_needed = 0;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll products_made = 0;
        for (ll i : time)
        {
            products_made += mid / i;
            if (products_made >= t)
                break;
        }
        if (products_made >= t)
        {
            time_needed = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << time_needed;
    return 0;
}