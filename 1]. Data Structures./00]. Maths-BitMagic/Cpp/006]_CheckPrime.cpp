#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter the Number to check :- " ;
    int check ;  cin >> check;

    int flag = 0 ;
    if(check <= 1){
        cout << "Invalid Number" << endl;
        return 0 ;
    }
    
    for(int i = 2; i < sqrt(check); i++){
        if(check % i==0){
            flag ++ ;
            break ;
        }
    }

    if(flag==0) cout << " The number is Prime" << endl;
    else cout << " The number is not Prime" << endl;
}