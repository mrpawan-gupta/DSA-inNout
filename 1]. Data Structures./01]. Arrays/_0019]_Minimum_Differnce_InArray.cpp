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
    
    sort(arr, arr+num);
    int ans = INT_MAX;
    for(int i=0; i<num; i++){
        if(arr[i+1]-arr[i]<ans) ans = arr[i+1]-arr[i];
    }
    
    cout <<"The minimum difference between the elements of the array is :" <<ans <<endl;
    return 0;
} 