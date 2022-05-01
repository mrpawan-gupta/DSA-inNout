/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int doUnion(int a[], int n, int b[], int m){
          set<int>s;
          for(int i = 0; i < n; i++){
            s.insert(a[i]);
          }
          for(int i = 0; i < m; i++){
            s.insert(b[i]);
          }
          return s.size();
        }
        int doUnionMap(int a[], int n, int b[], int m){
          map<int,int> iMap;
          for(int i = 0; i < n; i++){
            iMap[a[i]]++;
          }
          for(int i = 0; i < m; i++){
            iMap[b[i]]++;
          } 
          return iMap.size();
        }
        int doUnionBrute(int a[], int n, int b[], int m){
          int count = m;
          bool check = true;
          for(int i = 0; i < n; i++){
            check = false;
            for(int j = 0; j < m; j++){
              if(a[i] == b[j]){
                check = true;
                break;
              }
            }
            if(!check) count++;
          }
          return count;
        }
        
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;


    while(t--){

      int n, m;
      cin >> n >> m;
      int a[n], b[n];

      for(int i = 0; i < n; i++)
        cin >> a[i];

      for(int i = 0; i < n; i++)
        cin >> b[i];

      Solution ob;
      cout << "[" << ob.doUnion(a, n, b, m) << "]" << endl;
      cout << "[" << ob.doUnionMap(a, n, b, m) << "]" << endl;
      cout << "[" << ob.doUnionBrute(a, n, b, m) << "]" << endl;
    }

    return 0;
}
