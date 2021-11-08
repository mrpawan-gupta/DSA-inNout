/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    int remove(ListNode *head, int n)
    {
        if (head == NULL)
            return 0;

        int steps = remove(head->next, n); //steps to reach the last node from head->next node

        if (steps == n)                    //if head->next is the node that we need to remove
            head->next = head->next->next; //then remove it

        return steps + 1;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        if (remove(head, n) == n) //if head is the node that we need to remove
            head = head->next;

        return head;
    }
};