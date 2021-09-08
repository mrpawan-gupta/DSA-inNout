#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {10,23,15,2,9,6,3,8,15,16} ;
    int key ;
    cout <<"\nEnter item which you want to search :";
    cin >> key ;
    int flags = 0 ;
    for(int i = 0; i < 10; i++){
        if(arr[i] == key){
            flags++ ;
            break ;
        }
    }

    if(flags == 1) cout << " The item " << key <<" is present" << endl;
    else cout << " The item " << key <<" is not present" << endl;

    return 0;
}