/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-19 20:13:36
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N;
    cin >> N;
    vector<ll> songs(N);
    for (ll i = 0; i < N; ++i)
        cin >> songs[i];

    ll start = 0, ans = 0;
    map<ll, ll> mp;

    for (ll end = 0; end < N; ++end)
    {
        if (mp.find(songs[end]) == mp.end())
            mp.insert({songs[end], end});
        else
        {
            if (mp[songs[end]] >= start)
                start = mp[songs[end]] + 1;
            mp[songs[end]] = end;
        }
        ans = max(ans, end - start + 1);
    }
    cout << ans << "\n";
    return 0;
}