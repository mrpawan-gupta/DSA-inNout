#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> findDuplicates(vector<int> &nums){
            vector<int> v;
            int n = nums.size();
            for (int i = 0; i < nums.size(); i++){                                                                        
                nums[(nums[i]) % (n + 1) - 1] = (n + 1) + nums[(nums[i]) % (n + 1) - 1]; 
            }
            for (int i = 0; i < nums.size(); i++){
                int c = (nums[i]) / (n + 1); 
                if (c == 2)
                    v.push_back(i + 1);
            }
            return v;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;

    int size;
    cin >> size;

    vector<int> nums;

    for (int i = 0; i < size; i++){
        int element;
        cin >> element;

        nums.emplace_back(element);
    }

    vector<int> ans = obj.findDuplicates(nums);

    cout << "[" << ans[0];
    for (int i = 1; i < ans.size(); i++){
        cout << "," << ans[i];
    }
    cout << "]" << endl;

    return 0;
}