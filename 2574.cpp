class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            int rightSum = 0;
            for (int j = i + 1; j < nums.size(); j++)
            {
                rightSum += nums[j];
            }

            int leftSum = 0;
            for (int k = i - 1; k >= 0; k--)
            {
                leftSum += nums[k];
            }

            ans[i] = abs(leftSum - rightSum);
        }

        return ans;
    }
};