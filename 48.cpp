class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();

        // To print original matrix in desired order

        // int rows = matrix.size();
        // int cols = rows;

        // for(int i = 0; i <= cols-1; i++){
        //     for(int j = rows - 1; j >= 0; j--){
        //         cout << matrix[j][i] << " ";
        //     }
        //     cout << endl;
        // }

        // Step 1:- Transpose the Matrix

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2:- Reverse the Array at each row

        for (int i = 0; i < rows; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};