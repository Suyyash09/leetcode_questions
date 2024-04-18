// Approach - First, the number of nodes in the linked list is calculated. With the help of the size 
// of the linked list, we can determine the middle node of the linked list. After finding the middle 
// node, the linked list is traversed until the middle node, and then that node is returned.

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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }

        int target = 0;
        if (count % 2 != 0)
        {
            target = (1 + count) / 2;
        }
        else
        {
            target = ((1 + count) / 2) + 1;
        }

        ListNode *ans = head;
        count = 0;
        while (count < target - 1)
        {
            ans = ans->next;
            count++;
        }

        return ans;
    }
};