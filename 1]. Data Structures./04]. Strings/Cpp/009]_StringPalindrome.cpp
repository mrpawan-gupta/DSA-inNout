/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool checkPalindrome(string s){
            int i = 0;
            int j = s.size()-1;

            while(i<j){
                if(s[i]!=s[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    string String;
    cin >> String;

    while(t--){
        Solution ob;
        bool check = ob.checkPalindrome(String);
        if(check){
            cout << "String " << String <<" is Palindrome";
        }else{
            cout << "String " << String <<" is not Palindrome";
        }
    }

    return 0;
}