/*
    Author: MD Abdullah al moneem
    Institute: BAIUST
    Country: BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;
const int MOD = 1000000007;

#define BISMILLAH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define INF LLONG_MAX
#define pb push_back
#define yes cout << "YES\n";
#define no cout << "NO\n";
vector<int>prime(N,true);

/* --------------------SOLUTION FUNCTION ----------------------*/
void solve() {
    ll s,k;
    cin>>s>>k;

    vector<ll>v(s);
    for (ll i = 0; i < s; i++)
    {
        cin>>v[i];
    }
    
    vector<ll>rt;
    sort(v.begin(),v.end());
    for (ll i = k; i < s; i++)
    {
        rt.push_back(v[i]);
    }
    for (ll i = 0; i < k; i++)
    {
        rt.push_back(v[i]);
    }

    map<ll,ll>mp;
    for (ll i = 0; i < rt.size(); i++)
    {
        if (prime[rt[i]])
        {
            mp[rt[i]] = i;
        }
        
    }
    for (auto x: mp)
    {
        cout<<x.second<<" ";
    }
}

/* --------------------MAIN PROGRAM ---------------------------*/
int main() {
    BISMILLAH
    int tc;
    cin >> tc;
    prime[0] = false;
    prime[1] = false; 
    for (int i = 2; i*i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i*i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    
    while (tc--) {
        solve();
        cout<<endl;
    }
    return 0;
}
/* -------------------END OF PROGRAM ---------------------------*/


