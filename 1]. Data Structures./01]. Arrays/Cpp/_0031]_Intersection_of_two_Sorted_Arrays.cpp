#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> intersection(vector<int> &nums1, vector<int> &nums2){
            vector<int> ans;

            int i = 0;
            int j = 0;

            while(i < nums1.size() && j < nums2.size()){
                if (i > 0 && nums1[i - 1] == nums1[i]) {
                    i++;
                }
                else if (j > 0 && nums2[j - 1] == nums2[j]){
                    j++;
                }
                else if (nums1[i] < nums2[j]){
                    i++;
                }
                else if (nums1[i] > nums2[j]){
                    j++;
                }
                else{
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                }
            }

            return ans;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    int size2;
    cin >> size2;

    vector<int> nums1;
    vector<int> nums2;

    for (int i = 0; i < size; i++){
        int id;
        cin >> id;
        nums1.push_back(id);
    }
    for (int i = 0; i < size2; i++){
        int id;
        cin >> id;
        nums2.push_back(id);
    }

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    Solution obj;

    vector<int> ans = obj.intersection(nums1, nums2);

    cout << "[" << ans[0];
    for (int i = 1; i < ans.size(); i++){
        cout << "," << ans[i];
    }
    cout << "]" << endl;

    return 0;
}