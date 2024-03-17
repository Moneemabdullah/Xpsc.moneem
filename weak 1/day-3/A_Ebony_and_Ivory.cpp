/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
bool dp[10001];
#define cY cout << "Yes" << endl
#define cN cout << "No" << endl
bool rec(int a, int b, int x, int val)
{
    if (val == x)
    {
        return true;
    }
    else if (val > x || dp[val])
    {
        return false;
    }
    dp[val] = true;
    bool op1 = rec(a, b, x, val + a);
    bool op2 = rec(a, b, x, val + b);
    bool op3 = rec(a, b, x, val + (a + b));

    return (op1 == true || op2 == true || op3 == true);
}

int main()
{
    int a, b, x;
    cin >> a >> b >> x;

    if (rec(a, b, x, 0))
        cY;
    else
        cN;

    return 0;
}
