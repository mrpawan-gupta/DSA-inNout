/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int FindMissinfElementUsingBoolArray(vector<int> &nums){
          int n = nums.size();
          bool check[n+1] = {false};

          int rep = 0 ; // repeating element in Array

          for(int i = 0; i < n; i++){
            if(check[nums[i]] == true){
              rep = nums[i];
              continue;
            }
            check[nums[i]]= true;
          }
          //cout << "[" << rep << "]" << endl;
          for(int i = 1; i <= n; i++){
            if(check[i]==false){
              return i;
            }
          }
          return -1;
        }
        int FindMissinfElementUsingSort(vector<int> &nums){
            sort(nums.begin(), nums.end());
            for(int i = 0; i < nums.size(); i++){
              if(nums[i]!=i+1){
                return i+1;
              }
            }
            return -1;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    int size;
    cin >> size;

    vector<int>nums;
    for(int i = 0; i < size; i++){
      int id;
      cin >> id;
      nums.push_back(id);
    }

    while(t--){
        Solution ob;
        int ansB = ob.FindMissinfElementUsingBoolArray(nums);
        cout << "[" << ansB << "]" << endl;
        int ansS = ob.FindMissinfElementUsingSort(nums);
        cout << "[" << ansS << "]" << endl;
    }

    return 0;
}