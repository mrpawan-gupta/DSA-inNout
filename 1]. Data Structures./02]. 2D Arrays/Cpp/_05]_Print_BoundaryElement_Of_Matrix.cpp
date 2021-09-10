#include <bits/stdc++.h>
using namespace std;

int main(){

      cout << "Enter the no of Rows :" ;
    int rows  ; cin >> rows;
    cout << "Enter the number of Cols :";
    int cols ; cin >> cols;

    cout << "Enter the Element Of Matrix :-" <<endl;

    int arr[rows][cols]; 

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }

    cout << "The Boundary element of the Matrix are :" << endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if (i == 0 || j == 0 || i == cols- 1 || j == cols- 1)
                cout << arr[i][j] << " ";
            else
                cout << " "
                     << " ";
        }
        cout << endl;
    }
    return 0 ;
}