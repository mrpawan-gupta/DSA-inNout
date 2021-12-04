#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if (head == NULL){
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

void display(Node *head){
    Node *curr = head;
    while (curr != NULL){
        cout << curr->data << " --> ";
        curr = curr->next;
    }
    cout << "Null";
}
int main(){

    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 51);
    head = insertEnd(head, 31);
    head = insertEnd(head, 29);
    display(head);

    return 0;
}