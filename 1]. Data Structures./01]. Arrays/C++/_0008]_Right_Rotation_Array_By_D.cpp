#include<bits/stdc++.h>
using namespace std;

void rRotate(int arr[], int n ,int rt){
     //Rotate the given array by n times toward right    
    for(int i = 0; i < rt; i++){    
        int j, last;    
        //Stores the last element of the array    
        last = arr[n-1];    
        
        for(j = n-1; j > 0; j--){    
            //Shift element of array by one    
            arr[j] = arr[j-1];    
        }    
        //Last element of array will be added to the start of array.    
        arr[0] = last;    
    }    
        
    cout << endl; 
        
    //Displays resulting array after rotation    
    printf("Array after right rotation: \n");    
    for(int i = 0; i< n; i++){    
        cout << arr[i] << " "; 
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
    cout << "The Array Befor Rotation :" ;
    for(int i=0; i<num;++i){
        cout << arr[i] << " ";
    }
    cout <<"\n No of Rotation :";
    int r ; cin >> r ;
    rRotate(arr,num , r);
    return 0;
}