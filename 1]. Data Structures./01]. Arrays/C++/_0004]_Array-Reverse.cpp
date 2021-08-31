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

    int s = 0 ;
    int e = num-1;

    cout << "The Reverse Array is :" ;
    while(s<e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++; e-- ;
    }
    for(int i=0; i<num;i++){
        cout << arr[i] << " ";
    }
    return 0;
}