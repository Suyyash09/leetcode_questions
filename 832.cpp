// Approach - Firstly, reverse the elements of the first vector.Then, in the first vector, 
// each bit has to be changed if the element is 0, it is changed to 1, and vice versa. 
// This process has to be repeated for all vectors within the vector.

class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        int rows = image.size();
        int cols = image[0].size();
        for (int i = 0; i < rows; i++)
        {
            reverse(image[i].begin(), image[i].end());
            for (int j = 0; j < cols; j++)
            {
                int a = image[i][j];
                if (a == 0)
                {
                    image[i][j] = 1;
                }
                else
                {
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};