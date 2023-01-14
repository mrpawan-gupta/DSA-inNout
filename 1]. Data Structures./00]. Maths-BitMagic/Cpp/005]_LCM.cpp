#include <bits/stdc++.h>
using namespace std ;

int main() {
    cout << "Enter the first number :- " ;
    int n1 ; cin >> n1 ;

    cout << "Enter the second number :- " ;
    int n2 ; cin >> n2 ;
    int max_div , flag = 1 ;

    max_div = (n1 > n2) ? n1 : n2;  max_div = (n1 > n2) ? n1 : n2;   

    while (flag){ // (flag = 1)  
        
        if (max_div % n1 == 0 && max_div % n2 == 0) {

            cout <<" The LCM of " << n1 << " and " << n2 << " is " << max_div << endl ;  

            break;  

        }  
        ++max_div; // pre-increment max_div  
    }  
    return 0 ;
}  
