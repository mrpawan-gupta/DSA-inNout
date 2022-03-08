#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int peakIndexInMountainArray(vector<int> &nums){
            int start = 0;
            int end = nums.size() - 1;
            int mid = start + (end - start) / 2;

            while(start<end){
                if(nums[mid] < nums[mid+1]){
                    start = mid + 1;
                }else{
                    end = mid;
                }
                mid = start + (end - start) / 2;
            }
            return start;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    vector<int> nums;

    for (int i = 0; i < size; i++){
        int id;
        cin >> id;
        nums.push_back(id);
    }
    Solution obj;

    int ans = obj.peakIndexInMountainArray(nums);

    cout << "Peak is --> " << ans << endl;

    return 0;
}