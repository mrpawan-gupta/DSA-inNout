#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
class Node *head = NULL;

void insert(int new_data){
    struct Node *new_node = (class Node *)malloc(sizeof(class Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void display(){
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }
    cout << "NULL";
}
int main(){
    cout << "Enter the size of Linked list : ";
    int n;
    cin >> n;
    cout << "Enter the Elements in List : ";

    while(n--){
        int x;
        cin >> x;
        insert(x);
    }

    cout << "The linked list is: ";
    display();
    return 0;
}