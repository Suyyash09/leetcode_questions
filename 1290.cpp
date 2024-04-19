// Approach - the digits of the linked list are to be pushed into a vector. Subsequently, the vector 
// is traversed in reverse order. Whenever a digit is 0, it is skipped, and when a digit is 1, it is
// replaced by its corresponding digit raised to the power of 2. The sum of these modified digits is
// stored in a variable and returned. 

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
    int getDecimalValue(ListNode *head)
    {

        vector<int> digits;
        ListNode *temp = head;
        while (temp != NULL)
        {
            digits.push_back(temp->val);
            temp = temp->next;
        }

        int ans = 0;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 0)
            {
                continue;
            }
            else
            {
                ans += pow(2, digits.size() - i - 1);
            }
        }

        return ans;
    }
};