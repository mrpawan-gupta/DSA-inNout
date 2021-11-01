#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> a, int low , int mid , int high){
    int n = high - low + 1;
    int *b = new int[n];

    int left = low, right = mid + 1;
    int bIDx = 0;

    while(left<=mid && right<=high){
        if(a[left]<=a[right]){
            b[bIDx++] = a[left++];
        }
        else{
            b[bIDx++] = a[right++];
        }
    }
    while(left <=mid) b[bIDx++] = a[left++];
    while(right<=high) b[bIDx++] = a[right++];

    for (int k = 0; k < n;k++){
        a[low + k] = b[k];
    }
    delete[] b;
}
void mergeSort(vector<int>a, int low , int high){
    if(low<high){
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

int main(){

    vector<int> a = {1, 2, 5, 3, 1, 9, 7, 4, 2, 1, 5, 6};
    int n = a.size();
    mergeSort(a, 0, n);
    return 0;
}