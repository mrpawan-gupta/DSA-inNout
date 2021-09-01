#include<iostream>
using namespace std;

void Transpose(int ** array, int rows , int cols)
{
    
}

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

    cout << "The Transpose of the Matrix :" <<endl;
    
    int temp[rows][cols];
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            temp[j][i] =arr[i][j];

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            arr[i][j] = temp[i][j];

    for(int i=0; i<rows; i++){
        cout<<endl;
        for(int j=0; j<cols; j++)
            cout<<arr[i][j]<<" ";
    }
}