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
    for(int i=0; i<num;i++){
        cout << arr[i] << " ";
    }
    int count = 0 ; 
    while(count < num){
        for(int i=0; i<num-count;++i){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    cout << "\n";
    cout << "The sorted array is :";
    for(int i=0; i<num;++i) {
        cout << arr[i] << " ";
    }
    return 0 ;
   
}
