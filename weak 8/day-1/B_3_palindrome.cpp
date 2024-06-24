/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-11 21:57:58
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    long long n, j = 0;
    cin >> n;
    string s[] = {"b", "b", "a", "a"};

    for (int i = 0; i < n; i++)
    {
        cout << s[j];
        j++;
        if (j == 4)
        {
            j = 0;
        }
    }
    cout << endl;

    return 0;
}