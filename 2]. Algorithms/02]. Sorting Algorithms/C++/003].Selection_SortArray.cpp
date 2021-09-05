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
    for(int i=0; i<num-1;++i){
        for(int j=i+1; j<num ;++j){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    }
    cout << "\n" ;
    cout << "The Sorted array is :";
    for(int i=0; i<num ;++i) cout << arr[i] << " " ;


}