#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    pair <int,int>FirstAndLastIndexBinary( vector<int> &nums, int key){

        pair<int, int> ans = {-1, -1};
        int start = 0;
        int end = nums.size() - 1;
        int mid = (start + (end - start)) / 2;

        int last = -1;
        int first = -1;

        // calate last Occurence
        while (start <= end){
            if(nums[mid] == key){
                last = mid;
                start = mid + 1;
            }
            else if (nums[mid] > key) {
                end = mid - 1;
            }
            else if ( key > nums[mid]) {
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }
        // calculate First Occurence
        start = 0;
        end = nums.size() - 1;
        mid = (start + (end - start)) / 2;
        while (start <= end){
            if (nums[mid] == key){
                first = mid;
                end = mid - 1;
            }
            else if (nums[mid] > key){
                end = mid - 1;
            }
            else if (key > nums[mid]){
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }
        ans = {first, last};

        return ans;
    }

    pair<int, int> FirstAndLastIndexLiner(vector<int> &nums, int key){
        pair<int, int> p;
        int first = -1;
        int last = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            if(nums[i]==key && first==-1){
                first = i;
            }
            if (first != -1 && nums[i]==key){
                last = i;
            }
        }
        //cout << p.first << " " << p.second << endl;
        p.first = first;
        p.second = last;

        return p;
    }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    int key;
    cin >> key;

    vector<int> nums;

    for (int i = 0; i < size; i++){
        int id;
        cin >> id;
        nums.emplace_back(id);
    }
    Solution obj;

    pair<int, int> ans = obj.FirstAndLastIndexBinary(nums, key);

    cout << "[" << ans.first << "," << ans.second << "]" << endl;

    pair<int, int> ans2 = obj.FirstAndLastIndexLiner(nums, key);

    cout << "[" << ans2.first << "," << ans2.second << "]" << endl;

    return 0;
}