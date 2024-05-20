/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-20 22:02:43
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

bool is_prime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        if (is_prime(n))
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