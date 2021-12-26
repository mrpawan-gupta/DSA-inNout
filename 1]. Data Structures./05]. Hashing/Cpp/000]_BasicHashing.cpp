/*
Hashing ==>  technique or process of mapping keys, 
values into the hash table by using a hash function

we map value with acertain key in different Data Structues.

Example :-
Que :-- Given array a of N size. Given Q queries ans in
each given a number X, print Count of X in array.

Constaints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^s
*/
#include <bits/stdc++.h>
using namespace std;
const int Max_N = 1e7 +10;
int Count[Max_N]; // to count the occurence byt indx

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x; 
        Count[x]++; //increment in occurrence
    }
    int q; // Number of Queries
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout << Count[x] << endl;
    }

    return 0;
}
