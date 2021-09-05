#include <bits/stdc++.h>
using namespace std;

int numberof_ones(int n) { 
    int count = 0 ;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count; ;
    }
int main(){
    int num ; cin >> num;
    cout << numberof_ones(num) ;
}