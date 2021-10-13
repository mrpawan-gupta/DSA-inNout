#include <bits/stdc++.h>
using namespace std;

int printDigitSum(int n){
    static int sum = 0 ;
    sum += n % 10;
    n = n / 10;
    if(n==0){
        return sum;
    }
    return printDigitSum(n);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << "Enter the number : ";
    int num;
    cin >> num;

    cout << "Sum of digits of num is ";
    cout << printDigitSum(num);
    return 0;
}