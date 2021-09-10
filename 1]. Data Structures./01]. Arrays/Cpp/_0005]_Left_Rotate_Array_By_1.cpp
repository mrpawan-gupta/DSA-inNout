#include<bits/stdc++.h>
using namespace std;

void lRotateOne(int arr[], int n){
	int temp = arr[0];
	for(int i = 1; i < n; i++){
		arr[i - 1] = arr[i];
	}
	arr[n - 1] = temp;
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
        cout << arr[i] << " ";
    }
    cout<<endl;
    lRotateOne(arr, num);
    cout<<"After '1' Left Rotation"<<endl;
    for(int i = 0; i < num; i++){
       	cout<<arr[i]<<" ";
    }
    return 0;
}