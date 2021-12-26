#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << "Enter the string :- ";
    string str;
    getline(cin, str);
    cout << "The string is : " << str << endl;
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++){
        len++;
    }
    cout << "The length of sting is : " << len << endl;

    return 0;
}