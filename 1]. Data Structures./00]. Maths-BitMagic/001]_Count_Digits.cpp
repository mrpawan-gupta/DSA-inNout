#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << "Enter the Number :- " ;
    int num ; 
    cin >> num;

    cout << " The Number is :- " << num << endl;

    int count = 0;

    while(num>0){
        num = num/10;
        count++;
    }

    cout << " The Digits are :- " << count << endl;
}