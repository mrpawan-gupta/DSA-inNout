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
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return head;
        ListNode *temp;
        ListNode *ptr = head;
        while (ptr->next != NULL)
        {
            if (ptr->next->val == val)
            {
                temp = ptr->next;
                ptr->next = temp->next;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        if (head->val == val)
            return head->next;
        return head;
    }
};