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
    int max = INT_MIN ;
    int min = INT_MAX ;

    for(int i=0; i<num; i++){
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max) max = arr[i];
    }
    cout << "The Maximum Difference in Array :" <<(max-min) << endl;
    
    return 0;
}
