/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void CountFrequencies(int arr[], int size) {
            int frequency[5] = {0};

            for (int i = 0; i < size; i++){
                int k = arr[i] - 1;

                if(frequency[k]!=0){
                    continue;
                }
                frequency[k] = 1;

                for (int j = i+1; j < size; j++){
                    if(arr[i]==arr[j]){
                        frequency[k] += 1;
                    }
                }
                
            }

            cout << "[";
            for (int i = 0; i < 5; i++){
                cout << "(" << i+1 << "," << frequency[i] << "),";
            }
            cout << "]" << endl;
        }
        void CountFrequenciesUsingHashMap(int arr[], int size){
            unordered_map<int, int> Map;

            for (int i = 0; i < size; i++){
                Map[arr[i]]++;
            }
            cout << "[";

            for (int i = 0; i < size; i++){
                cout << "(" << i << "," << Map[i] << "),";
            }
            cout << "]" << endl;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    int arr[] = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    while(t--){
        Solution ClassObject;
        ClassObject.CountFrequencies(arr,size);
        ClassObject.CountFrequenciesUsingHashMap(arr, size);
    }

    return 0;
}