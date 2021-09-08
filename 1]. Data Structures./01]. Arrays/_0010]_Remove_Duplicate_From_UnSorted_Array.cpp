#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int A[], int n){
    sort(A,A+n);
    vector<int> ans ;
    int i = 0;
    while (i < n)
    {
        ans.push_back(A[i]) ;
        while (A[i] == A[i+1])
            i = i + 1;
        i = i + 1;
    }
    cout << "The Array after Romoving Duplicate :- ";
    for(auto elements : ans){
        cout << elements << " " ;
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
    cout << "The values in the array are :" ;
    for(int i=0; i<num;++i){
        cout << arr[i] << " ";
    }
    removeDuplicates(arr, num);
    
    return 0;
}