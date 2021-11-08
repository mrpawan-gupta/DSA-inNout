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
    ListNode *mergeTwoLists(ListNode *left, ListNode *right)
    {
        if (left == 0)
            return right;
        if (right == 0)
            return left;

        ListNode *cur;
        ListNode *ret;
        if (left->val > right->val)
        {
            ret = right;
            cur = right;
            right = right->next;
        }
        else
        {
            ret = left;
            cur = left;
            left = left->next;
        }

        while (left || right)
        {
            if (left == 0)
            {
                cur->next = right;
                break;
            }
            else if (right == 0)
            {
                cur->next = left;
                break;
            }
            if (left->val > right->val)
            {
                cur->next = right;
                cur = right;
                right = right->next;
            }
            else
            {
                cur->next = left;
                cur = left;
                left = left->next;
            }
        }
        return ret;
    }
};