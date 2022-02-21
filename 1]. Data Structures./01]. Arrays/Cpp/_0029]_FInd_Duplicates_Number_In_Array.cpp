#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int findDuplicate( vector<int> &arr, int size){
        int max_idx = 0;
        int curr_max = 0;

        for (int i = 0; i < size; ++i){
            int id = arr[i] % size;
            arr[id] += size;
        }

        for (int i = 0; i < size; ++i){
            if(arr[i]>curr_max){
                curr_max = arr[i];
                max_idx = i;
            }
            arr[i] %= size;
        }
        return max_idx;
    }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;

    int size;
    cin >> size;

    vector<int>arr;

    for (int i = 0; i < size; i++){
        int x;
        cin >> x;

        arr.emplace_back(x);
    }

    int ans = obj.findDuplicate(arr, size);

    cout << ans << endl;

    return 0;
}