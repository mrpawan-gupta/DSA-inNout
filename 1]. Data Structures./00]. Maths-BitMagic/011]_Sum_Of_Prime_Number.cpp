// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long int prime_Sum(int n)
    {
        // Code here

        bool prime[n + 1];
        memset(prime, true, sizeof(prime));

        for (int p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        long long int sum = 0;
        for (int i = 2; i <= n; i++)
        {
            if (prime[i] == true)
                sum += i;
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        Solution ob;
        long long int ans = ob.prime_Sum(n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends