/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-25 10:58:07
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long ans = 0, l = 0, r = 0;
    while (l < n && r < m)
    {
        int cn1 = 0, cn2 = 0, cr = a[l];
        while (a[l] == cr && l < n)
        {
            cn1++;
            l++;
        }

        while (cr > b[r] && r < m)
        {
            r++;
        }

        while (b[r] == cr && r < m)
        {
            cn2++;
            r++;
        }

        ans += (1LL * cn1 * cn2);
    }
    cout << ans << endl;
    return 0;
}