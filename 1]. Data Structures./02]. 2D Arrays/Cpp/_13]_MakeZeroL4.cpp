#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
  void MakeZeros(vector<vector<int>> &matrix){
    vector<vector<int>> v(matrix);
    for (int i = 0; i < matrix.size(); i++){
      for (int j = 0; j < matrix[i].size(); j++){
        int sum = 0;
        if (v[i][j] == 0){
          if (i != 0) {
            sum += v[i - 1][j];
            matrix[i - 1][j] = 0;
          }
          if (i != matrix.size() - 1)  {
            sum += v[i + 1][j];
            matrix[i + 1][j] = 0;
          }
          if (j != 0) {
            sum += v[i][j - 1];
            matrix[i][j - 1] = 0;
          }
          if (j != matrix[i].size() - 1) {
            sum += v[i][j + 1];
            matrix[i][j + 1] = 0;
          }
          matrix[i][j] = sum;
        }
      }
    }
  }
};
int main(){
  int tc;
  cin >> tc;
  while (tc--){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++){
        cin >> matrix[i][j];
      }
    }
    Solution ob;
    ob.MakeZeros(matrix);
    for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++)
        cout << matrix[i][j] << " ";
      cout << "\n";
    }
  }
  return 0;
}