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
    //function for reverse linked list
    ListNode *reverse(ListNode *&a)
    {
        ListNode *prevptr = NULL;
        ListNode *currptr = a;
        ListNode *nextptr;
        while (currptr != NULL)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        a = prevptr;
        return prevptr;
    }
    bool isPalindrome(ListNode *head)
    {
        int ans = true;
        ListNode *temp = head;
        int n = 0;
        //find length
        while (temp != NULL)
        {
            temp = temp->next;
            n++;
        }
        ListNode *a = head;
        int m = n / 2; // length/2 = mid
        while (m--)    // make pointer points to second half
        {
            a = a->next;
        }
        reverse(a);
        ListNode *x = head;
        ListNode *y = a;
        //pointer x points to first half and pointer y points to second half ,travesre and check valuess
        while (x != NULL && y != NULL)
        {
            if (x->val != y->val)
            {
                ans = false;
            }
            x = x->next;
            y = y->next;
        }
        return ans;
    }
};