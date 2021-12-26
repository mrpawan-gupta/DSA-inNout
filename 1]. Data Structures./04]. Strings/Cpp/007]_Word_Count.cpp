#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int ans = 1;
    for (int i = 0; i < s.length(); i++){
        if(s[i]==' ' && s[i-1]!=' '){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}