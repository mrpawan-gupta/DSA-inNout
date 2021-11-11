class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        struct ListNode *fast = head;
        struct ListNode *slow = head;

        while (slow && fast)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            if (fast == slow)
            {
                return true;
            }
            slow = slow->next;
        }

        return false;
    }
};