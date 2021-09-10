#include<bits/stdc++.h>
using namespace std;

void num_deleted(int arr[],int del,int num){
    int idx = 0 ;
    for(int i=0;i<num;i++) {
        if(arr[i] == del){
            idx =  i ;
        }
    }
    for(int i=idx; i<num; i++){
        arr[i] = arr[i+1];
    }

    for(int i=0; i<num-1; i++){
        cout << arr[i] << " ";
    }

}
int main(){
    cout << "Enter the no of elements :" ;
    int num ; cin >> num;
    cout << "Enter the value :" <<endl; 
    int arr[num];
    for(int i=0; i<num; i++){
        cin >> arr[i] ;
    }
    cout << "Enter the no to be delted" ;
    int del ; cin >> del;
    
    cout << "Before Deletion array is : " ;
    for(int i=0; i < num; i++){
        cout << arr[i]<<" ";
    }
    cout << "After Deletion array is : " ;
    num_deleted( arr ,del , num) ;
}