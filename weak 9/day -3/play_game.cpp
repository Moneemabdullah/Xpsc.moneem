
/*
    Author: MD Abdullah al moneem
    Institute: BAIUST
    Country: BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;
const int MOD = 1000000007;

#define BISMILLAH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define INF LLONG_MAX
#define pb push_back
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define rock '1'
#define paper '2'
#define sessor '3'




/* --------------------SOLUTION FUNCTION ----------------------*/
void solve() {
    // Your solution code goes here
    int q;
    cin>>q;

    int marry = 0, milly = 0;

    while (q--)
    {
        char a,b;
        cin>>a>>b;

        if (a == '1' && b == '2' && a!=b)
        {
            milly++;
        }
        else if(a=='2' && b == '3' && a!=b)
        {
            milly++;
        }
        else if (a == '3' && b == '1' && a!=b)
        {
            milly++;
        }
        else if (a!=b)
        {
            marry++;
        }
    }
    
    if (marry>milly)
    {
        cout<<"Merry"<<endl;
    }
    else
    {
        cout<<"Milly"<<endl;
    }


}

/* --------------------MAIN PROGRAM ---------------------------*/
int main() {
    BISMILLAH
    int tc;
    cin >> tc;
    int c = 1;
    while (tc--) {
        cout<<"Case "<<c++<<": ";
        solve();
    }
    return 0;
}
/* -------------------END OF PROGRAM ---------------------------*/
