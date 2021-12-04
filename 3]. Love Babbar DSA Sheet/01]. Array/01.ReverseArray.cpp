#include <bits/stdc++.h>
using namespace std;

// reverse function
void arrayRev(int arr[],int n){
    int i = 0;
    int j = n - 1; // n is number of element
    // array reverse logic
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    // reverse Array print
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int a[5] = {10, 2, 5, 6, 7};

    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }

    arrayRev(a, 5);

    return 0;
}