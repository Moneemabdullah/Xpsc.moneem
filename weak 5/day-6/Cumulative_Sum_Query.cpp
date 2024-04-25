/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-25 21:08:53
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int s;
    cin >> s;
    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }
    vector<int> pr(s);

    pr[0] = v[0];

    for (int i = 1; i < s; i++)
    {
        pr[i] = pr[i - 1] + v[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        cout << pr[b] - pr[a - 1] << endl;
    }

    return 0;
}