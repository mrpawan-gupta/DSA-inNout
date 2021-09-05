#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int x) { 
    return (x && !(x & x-1));
    }

int main(){
    cout << "Enter the number : ";
    int i; cin >> i;
    cout << isPowerOf2(i) << endl ;

}