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

// Approach - While Traversing the nodes of the linked list, if values of curr node is equals to value of
// current node's next value, then we have to remove current node's next and replace it with current node's
// next of next and otherwise traverse the linked list as usual. 

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        if (head == NULL)
        {
            return NULL;
        }

        ListNode *curr = head;

        while (curr != NULL && curr->next != NULL)
        {

            if (curr->val == curr->next->val)
            {
                curr->next = curr->next->next;
            }

            else
            {
                curr = curr->next;
            }
        }
        return head;
    }
};