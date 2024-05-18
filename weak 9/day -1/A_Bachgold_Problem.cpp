/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-18 19:52:45
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int n;
    cin >> n;
    int x = (n / 2);
    cout << x << endl;
    if (n & 1)
    {

        for (int i = 1; i < x; i++)
        {
            cout << 2 << " ";
        }

        cout << 3 << endl;
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }

    return 0;
}