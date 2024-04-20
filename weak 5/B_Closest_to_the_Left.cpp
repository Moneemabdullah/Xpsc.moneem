/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-19 21:49:13
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int s, n;
    cin >> s >> n;
    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }

    while (n--)
    {
        int val;
        cin >> val;
        int l = 0, r = s - 1;
        int ans = -1, m;

        while (l <= r)
        {
            m = (l + r) / 2;
            if (val >= v[m])
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}