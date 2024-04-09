/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-04-09 11:55:00
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
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */

    int n;
    cin >> n;
    stack<string> st;
    for (int i = 0; i < n; i++)
    {
        string val;
        cin >> val;

        st.push(val);
    }
    set<string> se;
    while (!st.empty())
    {
        string a = st.top();
        if (se.find(a) == se.end())
        {
            int k = a.size();
            cout << a[k - 2] << a[k - 1];
            se.insert(a);
        }
        st.pop();
    }
    cout << endl;
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/