/*
    You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
    Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
    You need to find and return that number which is unique in the array/list
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    // Technique Fist
    int findUniqueFirst(int arr[], int n){
        sort(arr, arr + n);

        for (int i = 0; i < n;){
            if(arr[i]!=arr[i+1]){
                return arr[i];
            }else{
                i += 2;
            }
        }
        return -1;
    }

    int findUniqueSecound(int arr[], int n){
        int ans = 0;

        for (int i = 0; i < n; i++){
            ans = ans ^ arr[i];
        }

        return ans;
    }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Solution obj;

    int ans = obj.findUniqueFirst(arr, n);

    int ans2 = obj.findUniqueSecound(arr, n);

    cout << ans << endl;
    cout << ans2 << endl;

    return 0;
}