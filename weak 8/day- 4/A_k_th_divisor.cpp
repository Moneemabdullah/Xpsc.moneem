/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-14 20:03:38
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> div;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if ((n / i) != i)
            {
                div.push_back(n / i);
            }
        }
    }
    sort(div.begin(), div.end());

    if (x <= div.size())
    {
        cout << div[x - 1] << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}