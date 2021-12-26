#include <bits/stdc++.h>
using namespace std;

int main(){

    string A;
    getline(cin, A);

    int vcount = 0, ccount = 0;
    for (int i = 0;i<A.length(); i++)

        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U'){
            vcount++;
        }
        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)){
            ccount++;
        }
    cout << "Vowel count is " << vcount << endl;
    cout << "Counstant count is " << ccount;
    return 0;
}