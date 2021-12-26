#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    cout << "String before Reversing " << s << endl;

    int i = 0;
    int j = s.length()-1;

    while(i<=j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << "string after Reversing : " << s << endl;

    return 0;
}