#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the Number : " ;
    
    int num ; cin >> num;
    int fact =1;
    for(int i = 2; i <= num; i++){
         fact = fact * i ;
    }

    cout << "The facorial of the number is " << fact << endl;
}