#include <bits/stdc++.h>
using namespace std;

void printReverse(int n)
{
    if(n==0){
        return;
    }
    cout << n << " ";

    return printReverse(n - 1);
}
void printIncrease(int n){
    static int temp = n;
    static int i = 1;
    if(i<temp+1){
        cout << i << " ";
        i++;
    }
    else{
        return;
    }

    return printIncrease(n - 1);
}
int main(){

    int n;
    cout << "Enter the last Number : ";
    cin >> n;

    cout << "Print in Decreasing order : ";
    printReverse(n);

    cout << "\nPrint in Increasing Order : ";
    printIncrease(n);

    return 0;
}