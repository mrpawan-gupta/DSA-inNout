#include <bits/stdc++.h>
using namespace std;

void pLeaders(int array[], int n){
    int Rmax = array[n-1];
    cout << Rmax << " ";

    for( int i = n -1 ; i >= 0 ; i-- ){
        if(Rmax < array[i]){
            Rmax = array[i];
            cout << Rmax << " ";
        }
    }
}
int main(){
    
    cout << "Enter the no of elements :" ;
    int num ; cin >> num;
    cout << "Enter the value :" <<endl; 
    int arr[num];
    for(int i=0; i<num; i++){
        cin >> arr[i] ;
    }
    cout << "The values in the array are :" ;
    for(int i=0; i<num;++i){
        cout << arr[i] << " " ;
    }

    cout <<"The Leader In an  Array are :" ;

    pLeaders(arr , num);
    return 0;
}