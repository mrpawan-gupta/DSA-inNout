
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int thirdLargest(int a[], int n){
            if (n < 3){
                return -1;
            }
            sort(a, a + n);
            int x = a[n - 3];

            return x;
        }

};

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.thirdLargest(a, n) << endl;
    }
} 