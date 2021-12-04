#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[8] = {2, 6, 3, 4, 5, 9, 212, 3};

    int min = a[0];
    int max = a[0];

    // iterate over the array
    for (int i = 1; i < 8; i++){
        if(min<a[i]){ // logic min element
            min = a[i];
        }
        if (max > a[i]){ // login for max element
            max = a[i];
        }
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;

    return 0;
}