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
    cout <<"\nFirst Repeating index :" ;
    int N = 1e6+2 ;
    int idx[N];
    for(int i=0; i <N; i++){
        idx[i] =-1;  
    }

    int minidx = INT_MAX ;

    for(int i=0; i<num;++i){
        if(idx[arr[i] != -1]) minidx = min(minidx, idx[arr[i]]);
        else idx[arr[i]] = i ;
    }

    if(minidx ==INT_MAX) cout << "-1" <<endl ;
    else minidx++; cout << minidx << endl ;
    return 0 ;
}