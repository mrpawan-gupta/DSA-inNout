#include<iostream>
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

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout <<"element at index A["<<i<<"]["<<j<<"] = " << arr[i][j] <<endl;
        }
    }
}