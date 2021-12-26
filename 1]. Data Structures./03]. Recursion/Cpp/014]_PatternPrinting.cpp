#include <bits/stdc++.h>
using namespace std;

void print(int n){
    /*
        1
        1 2
        1 2 3
    */
    if(n==0){   
        return;
    }
    print(n - 1);
    for (int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << "\n";
}
void print2(int n){
    /*
        1 2 3
        1 2
        1
    */
   if(n==0){
       return;
   }
   for (int i = 1; i <= n; i++){
       cout << i << " ";
   }
   cout << "\n";
   print2(n - 1);
}
void print3(int n){
    /*
        1 2 3
        1 2 
        1
        1 2
        1 2 3
    */
   if(n==1){
       cout << 1 << endl;
       return;
   }
   for (int i = 1; i <= n; i++){
       cout << i << " ";
   }
   cout << "\n";
   print3(n - 1);
   for (int i = 1; i <= n; i++){
       cout << i << " ";
   }
   cout << "\n";
}
int main(){
    cout << "Patern1 : " << endl;
    print(6);
    cout << "\npatern2 : " << endl;
    print2(6);
    cout << "\nPatern3 : " << endl;
    print3(6);

    return 0;
}