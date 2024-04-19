/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-19 10:12:10
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    long long v[b + 1];
    for (int i = 0; i <= b; i++)
        cin >> v[i];

    int x = 0;
    for (int i = 0; i < b; i++)
    {
        int count = 0;
        for (int j = 0; j < a; j++)
        {
            if (((v[i] >> j) & 1) != ((v[b] >> j) & 1))
                count++;
        }
        if (count <= c)
        {
            x++;
        }
    }
    cout << x << endl;
    return 0;
}