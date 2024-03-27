class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sumOfElements = 0;
        int sumOfDigits = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sumOfElements += nums[i];

            while (nums[i] > 0)
            {
                sumOfDigits += nums[i] % 10;
                nums[i] /= 10;
            }
        }

        return abs(sumOfElements - sumOfDigits);
    }
};