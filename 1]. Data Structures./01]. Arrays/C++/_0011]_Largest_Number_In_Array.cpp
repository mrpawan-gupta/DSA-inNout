#include <bits/stdc++.h>
using namespace std;

int main(){
    
    cout << "Enter the no of elements :" ;
    int num ; cin >> num;
    cout << "Enter the value :" <<endl; 
    int arr[num];
    for(int i=0; i<num; i++){
        cin >> arr[i] ;
    }
    cout << "The values in the array are :" ;
    for(int i=0; i<num;++i){
        cout << arr[i] << " ";
    }
    
    int max = INT_MIN ;
    int index = 0 ;
    for(int i=0; i<num; i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    cout << "The Maximum element of the array is :" << max <<" at index "<< index<< endl;
    return 0;
}