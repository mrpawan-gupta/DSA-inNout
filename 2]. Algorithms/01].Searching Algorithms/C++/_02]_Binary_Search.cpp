#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int n ,int key){
    int s = 0 ;
    int e = n-1 ;
    int c = 0 ;
    while(s < e){
        int mid = (s+e)/2 ;
        if(array[mid] == key){
            cout << " The item " << key <<" is present" << endl;
            c++;
            break ;
            return 0 ;
        }
        if(array[mid] > key)  mid = s ;
        if(array[mid] < key) mid = e ;
    }
    if(c!=1) cout << "The item " << key <<" is not present" << endl;
    return 0;
}
int main(){
    cout << "Enter the number of elements:";
    int n ; cin >> n;
    cout << "Array Inputs:";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key ;
    cout <<"\nEnter item which you want to search :";
    cin >> key ;
    binarySearch(arr,n ,key);
}