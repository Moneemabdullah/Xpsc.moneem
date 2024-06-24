/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-29 22:15:30
*/

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define BISMILLAH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int MAX_N = 1e5 + 5;

#define ll long long
#define pb push_back
#define no cout << "NO"
#define yes cout << "YES"
#define PI 3.1415926535897932384626433832795

/*  --------------------SOLUTION PROGRAM-------------------------*/
int countModes(const string &substring)
{
    unordered_map<char, int> freq;
    int maxFreq = 0;
    for (char c : substring)
    {
        freq[c]++;
        maxFreq = max(maxFreq, freq[c]);
    }
    int modes = 0;
    for (auto &pair : freq)
    {
        if (pair.second == maxFreq)
        {
            modes++;
        }
    }
    return modes;
}

void Modes(int T, vector<pair<int, string>> &test)
{
    for (int t = 0; t < T; ++t)
    {
        int N = test[t].first;
        string S = test[t].second;
        int totalSum = 0;
        for (int L = 0; L < N; ++L)
        {
            for (int R = L; R < N; ++R)
            {
                totalSum += countModes(S.substr(L, R - L + 1));
            }
        }
        cout << totalSum << endl;
    }
}
/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    int T;
    cin >> T;
    vector<pair<int, string>> test(T);
    for (int t = 0; t < T; ++t)
    {
        cin >> test[t].first >> test[t].second;
    }
    Modes(T, test);
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/