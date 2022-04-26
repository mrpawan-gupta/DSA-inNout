/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int BruteMethodOne(vector<int> &nums){
          /*
            The solution has Time complexity --> O(n^2)
            The space complexcity is --> O(1)
          */
          int n = nums.size();
          int Maxlen = 0;

          for(int i= 0 ; i < n; i++){
            int sum = 0 ;
            for(int j = i+1; j < n; j++){
                if(sum == 0){
                  Maxlen = max(Maxlen,j-i);
                }
            }
          }
          return Maxlen;
        }
        int HashingMethod(vector<int> &nums){
          /*
            The solution is with Time complexity --> O(n^2)
            The solutin is with Space complexity --> O(n)
          */
          unordered_map<int, int> Map;
          int sum = 0; // Initialize the sum of elements
          int max_len = 0; // Initialize result
          
          for (int i = 0; i < nums.size(); i++) {
              // Add current element to sum
            sum += nums[i];
 
            if (nums[i] == 0 && max_len == 0)
              max_len = 1;
            if (sum == 0)
              max_len = i + 1;
 
             // Look for this sum in Hash table
            if (Map.find(sum) != Map.end()) {
              // If this sum is seen before, then update max_len
              max_len = max(max_len, i - Map[sum]);
            }
            else {
              // Else insert this sum with index in hash table
              Map[sum] = i;
            }
          }
          return max_len;
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

    while(t--){
        Solution ob;
        int sol1 = ob.BruteMethodOne(nums);
        int sol2 = ob.HashingMethod(nums);
        cout << "Max length of subArray with Zero sum is " << sol1 << endl;
        cout << "Max length of subArray with Zero sum is " << sol2 << endl;
    }

    return 0;
}