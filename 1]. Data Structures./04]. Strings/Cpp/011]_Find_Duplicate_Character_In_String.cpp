/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        char DuplicateCharcterBrute(string s){
          /*
          Time Complexity is ---> O(n^2)
          Space Complexity is --> O(1)
          */
          int n = s.size();
          for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
              if(s[i]==s[j]){
                return s[i];
              }
            }
          }
          return ' ';
        }
        char DuplicateCharcterHashMap(string s){
          /*
          Time Complexity is --> O(n)
          Space Complexity is --> O(n)
          */
          unordered_map<char, int> charMap;
          for(int i = 0; i < s.length(); i++){
            charMap[s[i]]++;
          }
          auto id = charMap.find(2);

          cout << id->first << endl;

          for(auto &it : charMap){
            if(it.second > 1){
              return it.first;
            }
          }
          return ' ';
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    string String;
    cin >> String;

    while(t--){
        Solution ob;
        char Bans = ob.DuplicateCharcterBrute(String);
        cout << "[" << Bans << "]" << endl;
        char Hans = ob.DuplicateCharcterHashMap(String);
        cout << "[" << Hans << "]"<< endl;
    }

    return 0;
}