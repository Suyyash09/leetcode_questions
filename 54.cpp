class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> ans;

        // assigning indexes
        int startingRow = 0;
        int startingColumn = 0;
        int endingRow = rows - 1;
        int endingColumn = cols - 1;

        int count = 0;
        int size = rows * cols;

        while (count < size)
        {
            // print first row elements
            for (int index = startingColumn; index <= endingColumn && count < size; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            // print last column elements
            for (int index = startingRow; index <= endingRow && count < size; index++)
            {
                ans.push_back(matrix[index][endingColumn]);
                count++;
            }
            endingColumn--;

            // print last row elements
            for (int index = endingColumn; index >= startingColumn && count < size; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // print first column elements
            for (int index = endingRow; index >= startingRow && count < size; index--)
            {
                ans.push_back(matrix[index][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        return ans;
    }
};