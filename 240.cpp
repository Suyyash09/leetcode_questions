class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // The Approach to my Solution is Simple, every row of matrix is a sorted array
        // so for every row we can apply binary search and can find the target element.
        // time complexity - O(m*log(n))
        
        int row = matrix.size();
        int col = matrix[0].size();

        int rowStartIndex = 0;
        int rowEndIndex = row - 1;

        for (int i = rowStartIndex; i <= rowEndIndex; i++)
        {

            int start = 0;
            int end = col - 1;

            int mid = start + (end - start) / 2;

            while (start <= end)
            {
                int element = matrix[i][mid];

                if (element == target)
                {
                    return 1;
                }

                if (element < target)
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }

                mid = start + (end - start) / 2;
            }
        }

        return 0;
    }
};