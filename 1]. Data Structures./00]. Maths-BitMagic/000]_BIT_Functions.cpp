#include <bits/stdc++.h>
using namespace std;

int getBit (int n , int position){
    cout << "getBit of " << n << " at position " << position << " is: " ;
    return ((n & (1 << position))!=0);
}
int setBit(int n , int position){
    cout << "setBit of " << n << " at position " << position << " is: " ;
    return (n | (1<<position)) ;
}
int clearBit(int n , int position){
    cout << "ClearBit of " << n << " at position " << position << " is: " ;
    int mask = ~(1<<position);
    return n & mask;
}
int updateBit(int n , int position , int value){
    cout << "updateBit of " << n << " at position " << position << " is: " ;
    int mask = ~(1<<position);
    int num = (n & mask) ;
    return (num | (value << position));
}
int toggleBits(int n , int position){
    cout << "toggleBit of " << n << " at position " << position << " is: " ;
    return (n xor(1<< position)) ;
}

int main(){
    cout <<getBit(5,2)<<endl;
    cout <<setBit(5,1)<<endl;
    cout <<clearBit(5,2)<<endl;
    cout <<updateBit(5,3,1)<<endl;
    cout <<toggleBits(5,2)<<endl;
}