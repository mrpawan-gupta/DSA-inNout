/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void LongestConsecutiveSubsequenceHashing(vector<int> &nums){
          /* size must be 1 more than the max value of elements in Nums
         Time Complexity :- O(n)
         space Complexity :-  O(n) */
          map<int,int> M;
          int n = nums.size();

          for(int i=0; i<n; i++){
            M[nums[i]]++; // stroring frequency of a element 
          }

          int cnt = 1;
          int ans = INT_MIN;
          map<int,int> :: iterator it; // iterator of Map

          for( it = M.begin(); it!=M.end();){
            int f = it->first;
            it++;
            int s = it->first;
            int check = s-f;
            if(check == 1){
              cnt++;
            }
            else{
              ans = max(cnt,ans);
            }
          }
          cout << ans << endl;
        }
      void LongestConsecutiveSubsequence(vector<int> &nums){
        /* size must be 1 more than the max value of elements in Nums
         Time Complexity :- O(n)
         space Complexity :-  O(n) */
        vector<int>v(2000,false); // to store the element which is present
        for(int i = 0; i < nums.size(); i++){
          v[nums[i]] = true;
        }
        int cnt = 1;
        int ans = INT_MIN ; 

        for(int i = 1; i < v.size(); i++){
          if(v[i-1] == true and v[i]== true){
            cnt++;
          }else{
            ans = max(ans,cnt);
          }
        }
        cout << ans << endl;
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
    for(int i = 0; i < size; i++){
      int x;
      cin >> x;
      nums.push_back(x);
    }
  

    while(t--){
        Solution ob;
        ob.LongestConsecutiveSubsequenceHashing(nums);
        ob.LongestConsecutiveSubsequence(nums);
    }

    return 0;
}