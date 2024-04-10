class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};