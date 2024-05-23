/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-23 19:54:09
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int s, k;
    cin >> s >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < s; i++)
    {
        int val;
        cin >> val;
        v.push_back({val, i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < s; i++)
    {
        int l = 0;
        int r = s - 1;
        int terget = k - v[i].first;
        while (l <= r)
        {
            if (l != i && r != i && v[l].first + v[r].first == terget)
            {
                cout << v.at(i).second << " " << v.at(l).second << " "
                     << v.at(r).second << endl;
                return 0;
            }
            if (v[l].first + v[r].first < terget)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}