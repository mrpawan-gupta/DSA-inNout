// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long t[51][51];
    long long solve(int M, int N, int X)
    {

        if (N == 0 && X == 0)
            return 1;

        if (X <= 0 || N == 0)
            return 0;

        if (t[N][X] != -1)
            return t[N][X];

        long long count = 0;

        for (long long rem = 1; rem <= M; rem++)
        {
            count += solve(M, N - 1, X - rem);
        }

        return t[N][X] = count;
    }

    long long noOfWays(int M, int N, int X)
    {

        memset(t, -1, sizeof t);
        return solve(M, N, X);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int M, N, X;

        cin >> M >> N >> X;

        Solution ob;
        cout << ob.noOfWays(M, N, X) << endl;
    }
    return 0;
} // } Driver Code Ends