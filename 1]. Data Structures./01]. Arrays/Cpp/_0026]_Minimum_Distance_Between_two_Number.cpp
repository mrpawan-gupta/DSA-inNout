// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int minDist(int a[], int n, int x, int y){
        // code here
        int prev = -1;
        int res = INT_MAX;

        for (int i = 0; i < n; i++){
            if (a[i] == x || a[i] == y){
                if (prev != -1 && a[prev] != a[i]){
                    res = min(res, i - prev);
                }
                prev = i;
            }
        }
        return res == INT_MAX ? -1 : res;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
// } Driver Code Ends