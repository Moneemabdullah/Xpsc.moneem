/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-03-25 10:41:02
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> a(m), b(n);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0, ans = 0;
    while (r < n)
    {
        while (b[r] > a[l] && l < m)
        {
            l++;
            ans++;
        }
        r++;
        cout << ans << " ";
    }

    return 0;
}