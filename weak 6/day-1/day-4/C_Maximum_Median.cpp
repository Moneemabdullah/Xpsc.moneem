/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-30 19:31:18
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, m;
    cin >> s >> m;
    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](long long mid)
    {
        long long cnt = 0;
        for (int i = (s / 2); i < s; i++)
        {
            cnt += (v[i] < mid ? (mid - v[i]) : 0);
        }
        return cnt <= m;
    };
    sort(v.begin(), v.end());
    long long l = 1, r = 2e9, mid, ans = 0;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';

    return 0;
}