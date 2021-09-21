#include<bits/stdc++.h>
using namespace std;

int factorial_of_n(int n){
    if (n>=1){
        return n * factorial_of_n(n-1);
    }
    else return 1 ;
}
int main(){
    cout << "Enter the number :- ";
    int n ; cin >> n;

    int fact = factorial_of_n(n) ;
    cout << "The factorial is :- " << fact << endl ;

    return 0;
}