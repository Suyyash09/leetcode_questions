// Approach - While traversing the vector, we start with the 1st index up to size - 1 
// because a peak element is greater than the elements present on its adjacent sides. 
// If an element satisfies this condition, its index is passed into the resultant vector.

class Solution
{
public:
    vector<int> findPeaks(vector<int> &mountain)
    {
        vector<int> ans;
        for (int i = 1; i < mountain.size() - 1; i++)
        {
            if (mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};