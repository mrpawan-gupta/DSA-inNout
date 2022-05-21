#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZero(vector<vector<int>>& matrix) {
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

        for (int i = 0; i < rows; i++) {
            if (matrix[i][0] == 0) col0 = 0;
            for (int j = 1; j < cols; j++)
                if (matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
        }
        for (int i = rows - 1; i >= 0; i--) {
            for (int j = cols - 1; j >= 1; j--)
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if (col0 == 0) matrix[i][0] = 0;
        }
    }
    void setZeroBrute(vector<vector<int>>& matrix){
      int row = matrix.size();
      int col = matrix[0].size();
      
      for(int i = 0; i <  row; i++){
        for(int j = 0 ; j < col ; j++){
          if(matrix[i][j]==0){
            for(int x = 0 ; x < row; x++){
              if(matrix[x][j]!=0){
                matrix[x][j] = -1;
              }
            }
            for(int x = 0 ; x < col; x++){
              if(matrix[i][x]!=0){
                matrix[i][x] = -1;
              }
            }
          }
        }
      }
      for(int i = 0; i <  row; i++){
        for(int j = 0 ; j < col ; j++){
          if(matrix[i][j]== -1){
            matrix[i][j] = 0;
          }
        }
      }
    } 

};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.setZero(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}