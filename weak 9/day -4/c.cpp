/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-22 23:25:44
*/

#include <bits/stdc++.h>
using namespace std;

//'return type  ace perameter ace
int as(int x, int y)
{
    return x + y;
}

void sub(int x, int y) //'return type nai perameter ace
{
    cout << x - y;
}

int m() //'return type ace perameter nai
{
    int a, b;
    cin >> a >> b;
    return a * b;
}

void e() //'return type nai perameter nai
{
    int a, b;
    cin >> a >> b;
    cout << a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << as(a, b);

    swap(a, b);

    sub(a, b);
    e();
    return 0;
}
