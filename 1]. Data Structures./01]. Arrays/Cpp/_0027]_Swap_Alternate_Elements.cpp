#include <bits/stdc++.h>
using namespace std;

int main(){

    int count;
    cin >> count;

    int arr[count];

    for (int i = 0; i < count; i++){
        cin >> arr[i];
    }

    cout << "Array Before swapping " << endl;

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nArray after swapping " << endl;

    for (int i = 0; i < count; i+=2){
        if(i+1 == count){
            break;
        }
        swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < count; i++){
        cout << arr[i] << " ";
    }

    return 0 ;
}