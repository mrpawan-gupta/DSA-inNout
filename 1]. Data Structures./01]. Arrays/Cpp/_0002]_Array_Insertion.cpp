#include <iostream>
#include <cmath>
using namespace std;

int insert(int arr[], int n, int x,int pos){
       int idx = pos - 1;
       for(int i = n - 1; i >= idx; i--){
		arr[i + 1] = arr[i];
	}
	arr[idx] = x;
       return n + 1;
}

int main(){
       
        int n ; cin >> n;
       cout << "Enter the value :" <<endl; 
       int arr[n+1];
       for(int i=0; i<n; i++){
              cin >> arr[i] ;
       }
       
       cout<<"Before Insertion"<<endl;
       
       for(int i=0; i < n; i++){
       	cout<<arr[i]<<" ";
       }
       cout<<endl;
       int x = 7, pos = 2;
       n = insert(arr, n, x,pos);
       cout<<"After Insertion"<<endl;
       for(int i=0; i < n; i++){
       	cout<<arr[i]<<" ";
       }
       return 0;
}
