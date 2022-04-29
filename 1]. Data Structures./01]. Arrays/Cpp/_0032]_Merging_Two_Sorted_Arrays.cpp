/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
  void MergingTwoSortedArrayWithSpace(vector<int> &nums1, vector<int> &nums2, int n, int m){
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i < n and j < m){
      if(nums1[i]<nums2[j]){
        ans.push_back(nums1[i]);
        i++;  
      }else if(nums1[i] == nums2[j]){
        ans.push_back(nums1[i]);
        ans.push_back(nums2[j]);
        i++;
        j++;
      }else{
        ans.push_back(nums2[j]);
        j++;
      }
    }
    while(i<n){
      ans.push_back(nums1[i]);
      i++;
    }
    while(j<n){
      ans.push_back(nums1[j]);
      j++;
    }
    for(int i = 0; i < n+m ; i){
      cout << ans[i] << " ";
    }
  }
  void MergingTwoSortedArrayWithoutSpace(vector<int> &nums1, vector<int> &nums2, int n, int m){

  }
};

int main(int argc, char const *argv[]){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;

  int n, m;
  cin >> n >> m;

  vector<int> nums1;
  vector<int> nums2;

  for(int i = 0; i < n; i++){
    int id; cin >> id;
    nums1.push_back(id);
  }
  for(int i = 0; i < m; i++){
    int id; cin >> id;
    nums2.push_back(id);
  }

  while (t--){
    Solution ob;
    ob.MergingTwoSortedArrayWithSpace(nums1, nums2, n, m);
    ob.MergingTwoSortedArrayWithoutSpace(nums1, nums2, n, m);
  }

  return 0;
}