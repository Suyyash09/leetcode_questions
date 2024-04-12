// Approach - two pointer approach is used in which one pointer/variable is used to track the the unique elements of the array
// and second element is used to traverse the array to check whether alternate elements are equal or not, if not then 1st pointer is
// incremented.

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};