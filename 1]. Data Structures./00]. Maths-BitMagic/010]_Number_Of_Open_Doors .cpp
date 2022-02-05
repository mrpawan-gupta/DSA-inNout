// { Driver Code Starts

/* Problem Link : 
https://practice.geeksforgeeks.org/problems/number-of-open-doors1552/1/?track=PG-Mathematics&batchId=457#
*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int noOfOpenDoors(long long N){

        long long cnt = sqrt(N);

        return cnt;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;

        cin >> N;

        Solution ob;
        cout << ob.noOfOpenDoors(N) << endl;
    }
    return 0;
} // } Driver Code Ends