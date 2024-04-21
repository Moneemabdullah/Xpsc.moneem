/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-20 20:03:04
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int n;
    cin >> n;
    int index = 1;
    int worms;
    vector<int> arr(1000006);

    for (int i = 1; i <= n; i++)
    {
        cin >> worms;
        while (worms--)
        {
            arr[index] = i;
            index++;
        }
    }

    int number_juicy_worm;
    cin >> number_juicy_worm;
    while (number_juicy_worm--)
    {
        cin >> worms;
        cout << arr[worms] << endl;
    }
    return 0;
}