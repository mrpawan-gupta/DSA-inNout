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

    cout <<"After moving all Zeros at the end of the array :" <<endl;
    int Sidx = 0 ;
    int Eidx = num-1 ;
    int new_arr[num];
    for(int i=0; i<num; i++){
        if(arr[i]!=0){
            new_arr[Sidx] = arr[i];
            Sidx++;
        }
        else {
            new_arr[Eidx]=0 ;
            Eidx-- ;
        }
    }
    for(int i = 0 ; i<num; i++){
        cout << new_arr[i] << " ";
    }
    return 0;
}