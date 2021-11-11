class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *mid = head;
        while (head != NULL && head->next != NULL)
        {
            mid = mid->next;
            head = head->next->next;
        }
        return mid;
    }
};