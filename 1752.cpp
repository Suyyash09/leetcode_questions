// My Approach to Solution :-
// To check whether the given vector is sorted and rotated, sorted means elements are in incresing order,
// that is every element on left side is smaller than every element on the right side and if rotated,
// that is right half elements are moved to left and vice versa therefore there will be only one time
// that one element on left side is greater than element on right side and also we can check for the extreme
// elements also. If any vector doesn't satisfy these conditions than that is neither sorted nor rotated. 


class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                count++;
            }
        }

        if (nums[nums.size() - 1] > nums[0])
        {
            count++;
        }

        return count <= 1;
    }
};