// /*
//     MD Abdullah al moneem

//     Institute:- BAIUST
//     Country:- BANGLADESH
//     date: 2024-06-12 21:02:33
//     && (n - (prime[i] * prime[i]) + (prime[j] * prime[j]) != prime[i]) && ((n - (prime[i] * prime[i]) + (prime[j] * prime[j]) != prime[j]))
// */

// #include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;
// using namespace std;

// #define BISMILLAH                 \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// #define ll long long
// #define pb push_back
// #define no cout << "NO"
// #define yes cout << "YES"
// #define PI 3.1415926535897932384626433832795
// const int MAX_N = 1000000; // Adjust this limit according to the constraints

// vector<bool> is_prime(MAX_N + 1, true);
// vector<int> prime;

// void sieve()
// {
//     is_prime[0] = is_prime[1] = false;
//     for (int i = 2; i * i <= MAX_N; ++i)
//     {
//         if (is_prime[i])
//         {
//             for (int j = i * i; j <= MAX_N; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }
//     for (int i = 2; i <= MAX_N; ++i)
//     {
//         if (is_prime[i])
//         {
//             prime.push_back(i);
//         }
//     }
// }
// /*  --------------------SOLUTION PROGRAM-------------------------*/
// void solve()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (find(prime.begin(), prime.end(), ((n - (prime[i] * prime[i]) + (prime[j] * prime[j])) * (n - (prime[i] * prime[i]) + (prime[j] * prime[j])))) != prime.end())
//             {
//                 cout << "YES";
//                 return;
//             }
//         }
//     }
//     cout << "NO";

//     // for (int i = 0; i < prime.size(); i++)
//     // {
//     //     cout << prime[i];
//     // }
// }

// /*  --------------------MAIN PROGRAM----------------------------*/

// int main()
// {
//     BISMILLAH

//     int tc;
//     cin >> tc;
//     // int t = 1;
//     sieve();
//     while (tc--)
//     {
//         // cout << "Case #" << t++ << ": ";
//         solve();
//         cout << "\n";
//     }
//     return 0;
// }
// /* -----------------END OF PROGRAM --------------------*/
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000; // Adjust this limit according to the constraints

vector<bool> is_prime(MAX_N + 1, true);
vector<int> prime;

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_N; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= MAX_N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAX_N; ++i)
    {
        if (is_prime[i])
        {
            prime.push_back(i);
        }
    }
}

bool is_valid(int n)
{
    // Check if n is even and >= 6
    if (n % 2 != 0 || n < 6)
        return false;

    // Iterate through all combinations of three distinct prime numbers
    for (int i = 0; i < prime.size(); ++i)
    {
        for (int j = i + 1; j < prime.size(); ++j)
        {
            for (int k = j + 1; k < prime.size(); ++k)
            {
                if (prime[i] + prime[j] + prime[k] == n)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (is_valid(n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
