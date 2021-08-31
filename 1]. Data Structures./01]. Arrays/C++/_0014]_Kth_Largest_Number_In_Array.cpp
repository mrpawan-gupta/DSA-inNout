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

    cout << "Enter the kth value : " ;
    int k ; cin >> k ;
    sort(arr , arr+num);
    cout << " The Second Largest Number In Array is : " << arr[num-k];

    return 0;
}