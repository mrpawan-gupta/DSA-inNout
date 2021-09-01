#include<iostream>
using namespace std;

int main(){

    cout << "Enter the no of Rows :" ;
    int rows  ; cin >> rows;
    cout << "Enter the number of Cols :";
    int cols ; cin >> cols;

    cout << "Enter the Element Of Matrix-I";
    int arr[rows][cols]; 

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Enter the no of Rows matrix-II:" ;
    int rows1  ; cin >> rows1;
    cout << "Enter the number of Cols matrix-II:";
    int cols1 ; cin >> cols1;

    cout << "Enter the Element Of Matrix-II :-" <<endl;

    int arr1[rows1][cols1]; 

    for(int i=0; i<rows1; i++){
        for(int j=0; j<cols1; j++){
            cin >> arr[i][j];
        }
    }

    if(rows1==rows && cols1==cols){
        int result[rows1][cols1];
        for(int i = 0 ; i < rows; i++){
            for(int j=0; j<cols; j++){
                result[i][j]=(arr[i][j]-arr1[i][j]);
            }
        }

        cout << "The matrix After Substraction" << endl;
        for(int i = 0 ; i < rows; i++){
            for(int j = 0 ; j < cols; j++){
                cout << result[i][j] << " " ;
            }
            cout << endl;
        }

    }
    else cout << -1 << endl ;

    return 0 ;
}
