#include <bits/stdc++.h>
using namespace std;
 
int main(){

    cout << "Enter the Number to check: " ;
    int num , r ,sum = 0 ; 
    cin >> num;
    
    int temp= num;    
    while(num>0){    
        r=num%10;    
        sum=(sum*10)+r;    
        num=num/10;    
    } 
    if(temp==sum)  cout << "palindrome number ";    
    
    else  cout << "not palindrome";  

    return 0;  
} 