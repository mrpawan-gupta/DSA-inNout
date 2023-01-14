#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the First number : ";
    int n1 ; cin >> n1 ;

    cout << "Enter the Second number : ";
    int n2 ; cin >> n2 ;

    int GCD_Num = 0 ;
    for( int i = 1; i <= n1 && i <= n2; ++i){  
        if (n1 % i ==0 && n2 % i == 0)  
            GCD_Num = i; /* if n1 and n2 is completely divisible by i, the divisible number will be the GCD_Num */  
    }  
    // print the GCD of two numbers  
    printf (" GCD of two numbers %d and %d is %d.", n1, n2, GCD_Num);  
    return 0;  
}  
