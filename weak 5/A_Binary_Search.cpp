/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-19 19:59:57
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl
#define ll long long

int main()
{
    int s, k;
    cin >> s >> k;
    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    while (k--)
    {
        int val;

        cin >> val;
        int l = 0, r = s - 1, mid;
        bool found = false;
        while (l <= r)
        {

            mid = (l + r) / 2;

            if (val == v[mid])
            {
                found = true;
                break;
            }
            else if (val > v[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (found)
        {
            cY;
        }
        else
        {
            cN;
        }
    }

    return 0;
}