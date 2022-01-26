
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
} 

int reverseTheNumber(int temp){
    int ans = 0;
    while (temp > 0){
        int rem = temp % 10;
        ans = ans * 10 + rem;
        temp = temp / 10;
    }
    return ans;
}

int convertFive(int num){
    // Your code here
    if (num == 0){
        return 5;
    }
    else{
        int temp = 0;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit == 0)
            {
                digit = 5;
            }
            temp = temp * 10 + digit;
            num = num / 10;
        }
        return reverseTheNumber(temp);
    }
}