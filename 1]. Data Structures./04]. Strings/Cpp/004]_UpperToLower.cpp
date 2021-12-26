#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 65 && s[i] <= 92){
            s[i] = s[i] + 32;
        }
    }
    cout << "Changing upper case to lower ---> " << s << endl;
    return 0;
}