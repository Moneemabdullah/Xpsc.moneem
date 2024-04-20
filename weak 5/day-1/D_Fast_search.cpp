/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-19 22:33:56
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int x = distance(a.begin(), upper_bound(a.begin(), a.end(), r));
        int y = distance(a.begin(), lower_bound(a.begin(), a.end(), l));

        int cnt = x - y;
        cout << cnt << " ";
    }
    cout << endl;

    return 0;
}