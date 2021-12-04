#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:

    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

void Display(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " --> ";
        curr = curr->next;
    }
    cout << "Null";
}
int main()
{
    Node *head = NULL;
    head = insertBegin(head, 30);
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    head = insertBegin(head, 46);
    head = insertBegin(head, 12);
    Display(head);
    return 0;
}
