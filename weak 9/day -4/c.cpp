/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-22 23:25:44
*/

#include <bits/stdc++.h>
using namespace std;

class Name
{
private:
public:
    float pi = 3.1416;

    friend void area(Name);
};

void area(Name obj)
{
    int r;
    obj.pi;
    cout << obj.pi;
}

int main()
{
    Name obj;
    area(obj);

    return 0;
}
