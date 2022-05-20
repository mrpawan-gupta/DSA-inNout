/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> countDistinctElement(vector<int> &v, int k){
          int n = v.size();
          set<int>s;
          vector<int> ans;
          for(int i = 0; i <= n - k; i++){
            s.clear();
            for(int j = i; j < i + k; j++){
              s.insert(v[j]);
            }
            ans.push_back(s.size());
          }
          return ans;
        }
        vector<int> countDistinctElementMap(vector<int> &v, int k){
          int n = v.size();
          unordered_map<int,int> Map;
          vector<int> ans;
          for(int i = 0; i < k; i++){
            Map[v[i]]++;
          }
          ans.push_back(Map.size());
          int left = 0;

          for(int right = k; right < n; right++){
            Map[v[left]]--;
            Map[v[right]]++;
            if(Map[v[left]] == 0){
              Map.erase(v[left]);
            }
            left++;
            ans.push_back(Map.size());
          }
          return ans;
        }
        vector<int> countDistinctElementSet(vector<int> &v, int k){
          int n = v.size();
          set<int> Set;
          vector<int> ans;
          for(int i = 0; i < k; i++){
            Set.insert(v[i]);
          }
          ans.push_back(Set.size());
          int left = 0;

          for(int right = k; right < n; right++){
            Set.erase(v[left]);
            Set.insert(v[right]);
            left++;
            ans.push_back(Set.size());
          }
          return ans;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    int n; cin >> n;
    int k; cin >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
      int id;
      cin >> id;
      v.push_back(id);
    }
    while(t--){
        Solution ob;
        vector<int> sol = ob.countDistinctElement(v,k);
        cout << "[" << sol[0] ;
        for(int i = 1; i < sol.size(); i++){
          cout << "," << sol[i];
        }
        cout << "]" << endl;
        vector<int> sol2 = ob.countDistinctElementSet(v,k);
        cout << "[" << sol2[0] ;
        for(int i = 1; i < sol2.size(); i++){
          cout << "," << sol2[i];
        }
        cout << "]" << endl;
        vector<int> sol3 = ob.countDistinctElementMap(v,k);
        cout << "[" << sol3[0] ;
        for(int i = 1; i < sol3.size(); i++){
          cout << "," << sol3[i];
        }
        cout << "]" << endl;
    }

    return 0;
}