/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-25 19:30:58
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

vector<int> a(20);
int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    int co, mx, sum;
    for (int i = 0; i < (1 << n); i++)
    {
        co = mx = sum = 0;
        int mn = 100000000;
        int diffr;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                co++;
                sum += a[j];
                if (a[j] > mx)
                    mx = a[j];
                if (a[j] < mn)
                    mn = a[j];
            }
        }
        diffr = mx - mn;
        if (co >= 2 && sum >= l && sum <= r && diffr >= x)
            ans++;
    }
    cout << ans << endl;

    return 0;
}