/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

// print index of element whoese sum is target

class Solution{
    public:
        vector<int>ButeMethod(vector<int> &nums, int target){
          vector<int> Result;
          for(int i = 0; i < nums.size(); i++){
            int count = target - nums[i];
            for(int j = i+1; j < nums.size() ; j++){
              if(nums[j]==count){
                Result.push_back(i);
                Result.push_back(j);
                return Result;
              }
            }
          }
          return {-1,-1};
        }
        vector<int>HasingMethod(vector<int> &nums, int target){
          unordered_map<int, int> indices;
          for (int i = 0; i < nums.size(); ++i) {
            auto it = indices.find(target - nums[i]);
            if (it != indices.end()){
              return vector<int> {i, it->second};
            }
            indices[nums[i]] = i;
          }
          return {-1,-1};
        } 
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    int size;
    cin >> size;

    vector<int> nums;

    for(int i = 0 ; i < size; i++){
        int id;
        cin >> id;
        nums.push_back(id);
    }
    int target;
    cin >> target;

    while(t--){
        Solution ob;
        vector<int> solB = ob.ButeMethod(nums,target);
        cout << "[" << solB[0] << "," << solB[1] << "]" << endl;

        vector<int> solH = ob.HasingMethod(nums,target);
        cout << "[" << solH[0] << "," << solH[1] << "]" << endl;

    }

    return 0;
}