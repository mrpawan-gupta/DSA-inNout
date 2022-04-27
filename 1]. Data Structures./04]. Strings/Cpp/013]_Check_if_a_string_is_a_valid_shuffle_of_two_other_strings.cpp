/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    /* compare the given intput string if they are permutation of each other */
    /* for example str = abc and str2 = cab are two valid strings */
        bool checkifvalidString(string s1, string s2){
            int ns1 = s1.length();
            int ns2 = s2.length();

            if(ns1!=ns2){
                return false;
            }
            unordered_map<char, int> charMap;
            for(int i = 0; i < ns1; i++){
                charMap[s1[i]]++;
                charMap[s2[i]]++;
            }
            for(auto &i : charMap){
                if(i.second%2!=0){
                    return false;
                }
            }
            return true;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    string s1;
    cin >> s1;

    string s2;
    cin >> s2;

    while(t--){
        Solution ob;
        bool Hans = ob.checkifvalidString(s1, s2);
        if(Hans) cout << "String are valid" << endl;
        else cout << "Strings are not valid" << endl;

    }

    return 0;
}