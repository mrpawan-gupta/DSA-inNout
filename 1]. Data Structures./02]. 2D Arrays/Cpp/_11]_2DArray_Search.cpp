#include <bits/stdc++.h>
using namespace std;

int main(){
      cout << "Enter the no of Row :" ;
    int row ; cin >> row ;
    cout << "Enter the no of columns :" ;
    int column ; cin >> column ;

    int arr[row][column] ;
    cout << "Enter the values :" ;
    for(int i =0 ; i < row ; i++){
        for(int j=0 ; j < column ; j++){
            cin >> arr[i][j];
        }
    }
    cout << "\n" <<" the values are : \n" ;

     for(int i=0 ; i < row ; i++){
        for(int j=0 ; j < column ; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n" <<"Enter the Element to search :";
    int key ; cin >> key ;
    int flag = 0 ;

    for(int i=0 ; i < row ; i++){
        for(int j=0 ; j < column ; j++){
            if(arr[i][j]==key){
                flag++;
                break;
            }
        }
    }
    if(flag == 1){
        cout << key << " is present";
    }
    else{
         cout << key << " is not present";
    }

}