 
//Que :- The Sum of 1st n terms ?

#include <bits/stdc++.h>
using namespace std;

int add(int n) {
    if(n != 0)
        return n + add(n - 1);
    return 0;
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum =  " << add(n);

    return 0;
}
