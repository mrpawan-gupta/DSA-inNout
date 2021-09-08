#include <bits/stdc++.h>
using namespace std;

int remDups(int arr[], int n){
    if (n==0 || n==1)
        return n;
 
    int temp[n];
 
    // Start traversing elements
    int j = 0;
    for (int i=0; i<n-1; i++)
 
        // If current element is not equal
        // to next element then store that
        // current element
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
 
    // Store the last element as whether
    // it is unique or repeated, it hasn't
    // stored previously
    temp[j++] = arr[n-1];
 
    // Modify original array
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    return j;
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

    int ans = remDups(arr , num);

    cout <<"After Removing Duplicates :-" ;
    for(int i = 0 ; i< ans; i++){
        cout << arr[i] << " ";
    }
    return 0;
}