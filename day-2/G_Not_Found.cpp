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

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int f[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i] - 'a';
        f[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (f[i] == 0)
        {
            cout << char(i + 'a');
            return 0;
        }
    }

    cout << "None" << endl;

    return 0;
}