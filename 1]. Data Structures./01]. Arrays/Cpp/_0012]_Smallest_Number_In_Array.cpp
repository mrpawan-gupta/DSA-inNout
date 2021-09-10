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
    
    int min = INT_MAX;
    int index = 0 ;
    for(int i=0; i<num; i++){
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }
    }
    cout << "The Maximum element of the array is : " << min <<" at index "<< index<< endl;
    return 0;
}