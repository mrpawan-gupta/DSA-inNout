#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int NumberofOccurenceBrute(vector<int> &nums, int Target){
        //The Approch USed iS linear Approch O(n)

        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==Target){
                count++;
            }
        }
        return count;
    }

    int NumberofOccurenceBinary(vector<int> &nums, int Target){
        // The Approch Uses The Binary Search Method O(n);

        int ans = -1;
        int start = 0;
        int end = nums.size() - 1;
        int mid = (start + (end - start)) / 2;

        int last = -1;
        int first = -1;

        // calate last Occurence
        while (start <= end){
            if (nums[mid] == Target){
                last = mid;
                start = mid + 1;
            }
            else if (nums[mid] > Target) {
                end = mid - 1;
            }
            else if (Target > nums[mid]){
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }
        start = 0;
        end = nums.size() - 1;
        mid = (start + (end - start)) / 2;
        while (start <= end){
            if (nums[mid] == Target){
                first = mid;
                end = mid - 1;
            }
            else if (nums[mid] > Target){
                end = mid - 1;
            }
            else if (Target > nums[mid]){
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        ans = last - first + 1;

        return ans;
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

    int ansLinear = obj.NumberofOccurenceBrute(nums, key);
    int ansBinary = obj.NumberofOccurenceBinary(nums, key);

    cout << "Using Linear method -> " << ansLinear << endl;
    cout << "Using Binary Search -> " << ansBinary << endl;

    return 0;
}