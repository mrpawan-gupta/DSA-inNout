#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "The Statically created array :- ";
    int arr[5] = {0 , 1 , 2 , 3 , 4}; // this is allocated inside stack memory
    int* p ; // pointer of array

    p = (int*)malloc(5 * sizeof(int)); // dynamically createing array inside heap memory

    p[0] = 1; // initializing all the term in array
    p[1] = 2 ;
    p[2] = 3 ;
    p[3] = 4 ;
    p[4] = 5 ;

    for(int i = 0; i < 5 ; ++i){ // iteration over normal array
        cout << arr[i] << " ";
    }

    cout << endl ;

    cout << "The Dynamically created array :- ";

    for(int i = 0; i < 5; ++i){ // iteration over dynamic array
        cout << p[i] << " ";
    }

    return 0;
}