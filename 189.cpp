class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        // initialise another vector of same size
        vector<int> temp(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            // (k + i) will move the index from k units, & modulus(%) of size of original vector gives the desired index
            temp[(k + i) % nums.size()] = nums[i];
        }

        // coping temperary vector (temp) into the original vector (nums)
        nums = temp;
    }
};