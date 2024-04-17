/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-17 15:25:32
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl
#define ll long long

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a << " " << b << " ";
        ll count = 1;
        for (int i = a; i <= b; i++)
        {
            ll n = i;
            ll lc = 0;
            while (n != 1)
            {
                if (n & 1)
                {
                    n = (3 * n) + 1;
                }
                else
                {
                    n = n / 2;
                }

                count++;
                lc++;
            }

            count = max(count, lc);
        }

        cout << count << endl;
    }

    return 0;
}