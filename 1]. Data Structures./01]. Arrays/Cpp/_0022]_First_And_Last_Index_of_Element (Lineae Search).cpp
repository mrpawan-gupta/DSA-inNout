#include <bits/stdc++.h>
using namespace std;

void findIndex(int arr[], int n, int key){
    int first = -1, last = -1;
    for (int i = 0; i < n; i++){
        if (key != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        cout << "First Occurrence = " << first
             << "\nLast Occurrence = " << last;
    else
        cout << "Not Found";
}
int main(){

    cout << "Enter the size of array : ";
    int n;
    cin >> n;

    cout << "Enter the element of array : ";

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    cout << "Enter the Key : ";
    int key;
    cin >> key;

    findIndex(arr, n, key);

    return 0;
}