#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int beg, int end, int item){  
    int mid;  
    if(end >= beg){     
        mid = (beg + end)/2;  
        if(a[mid] == item){  
            return mid+1;  
        }  
        else if(a[mid] < item){  
            return binarySearch(a,mid+1,end,item);  
        }  
        else{  
            return binarySearch(a,beg,mid-1,item);  
        }  
      
    }  
    return -1;   
}

int main (){  
    int arr[10] = {16, 19, 20, 23, 45, 56, 78, 90, 96, 100};  
    int item, location=-1;   
    cout << "Enter the item which you want to search : ";  
    cin >> item; 
    location = binarySearch(arr, 0, 9, item);  
    if(location != -1){  
        cout << "Item found at index " << location << endl; 
    }  
    else{  
       cout <<"Item Not found" << endl; 
    }  
}   
