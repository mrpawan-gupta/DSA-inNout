/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool checkRotationInString(string str1, string str2){
            int lens1 = str1.length();
            int lens2 = str2.length();
            if(lens1!=lens2){
                return false;
            }
            string temp = str1 + str1;
            return (temp.find(str2) != string::npos);
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    string str1;
    cin >> str1;

    string str2;
    cin >> str2;

    while(t--){
        Solution ob;
        bool check = ob.checkRotationInString(str1, str2);
    }

    return 0;
}