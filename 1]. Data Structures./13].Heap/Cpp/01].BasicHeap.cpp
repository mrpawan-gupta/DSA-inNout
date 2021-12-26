#include <bits/stdc++.h>
using namespace std;

class Heap{
public:
    Heap(int size) : current_size_(0), size_(size), arr_(new int[size]) {}

    // Insert a new value to the heap
    void insert(const int value){
        if (current_size_ < size_)
        {
            arr_[current_size_] = value;
            current_size_++;
            if (current_size_ == size_)
                convertArrayIntoHeap();
        }
        else
            cout << "\nThe heap is full.\n";
    }

    // Retrieves the value store at the root of the tree
    int top(){
        return arr_[0];
    }

    // Extract the root value of the tree and return it as result
    int pop(){
        swap(arr_[0], arr_[current_size_ - 1]);
        heapify(current_size_ - 1, 0);
        current_size_--;

        return arr_[current_size_];
    }

private:
    // Convert a simple array in a Heap
    void convertArrayIntoHeap(){
        // Just need to process the node with children
        for (int i = current_size_ / 2 - 1; i >= 0; i--)
        {
            heapify(current_size_, i);
        }
    }

    /*
    Compares a node with his left and right value, if one of them is greather
    than the node value, swap the content between them and recursively does the
    same with the swaped node.
  */
    void heapify(int size, int i){
        int max_value = i;
        int left = i * 2 + 1;
        int right = i * 2 + 2;

        if (left < size && arr_[left] > arr_[max_value])
            max_value = left;
        if (right < size && arr_[right] > arr_[max_value])
            max_value = right;
        if (max_value != i){
            swap(arr_[i], arr_[max_value]);
            heapify(size, max_value);
        }
    }

    int *arr_;
    int current_size_;
    int size_;
};

int main(){
    int size, value;
    cin >> size;

    Heap heap(size);
    for (size_t i = 0; i < size; i++){
        cin >> value;
        heap.insert(value);
    }

    for (size_t i = 0; i < size; i++){
        cout << heap.pop() << ' ';
    }

    return 0;
}