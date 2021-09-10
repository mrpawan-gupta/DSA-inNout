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
    int sum =0 ;
    cout << "The values in the array are :" ;
    for(int i=0; i<num;++i){
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;
    cout << "The sum is :" <<sum <<endl;

}