/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-23 21:02:44
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b <= a + c)
    {
        cY;
    }
    else
    {
        cN;
    }

    return 0;
}