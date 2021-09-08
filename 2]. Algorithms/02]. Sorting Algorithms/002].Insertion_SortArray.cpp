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
    cout << endl ;
    cout << "The sorted array is :" ;
    for(int i=1; i<num;++i){
        int curr = arr[i];
        int j = i-1;
        while(arr[j]>curr && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr ;
    }
    for(int i=0; i<num ;++i) cout << arr[i] << " ";
     return 0 ;
}