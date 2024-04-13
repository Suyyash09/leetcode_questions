// Approach - First sort both the vectors. Then create a set of int data type. Set is used because it is capable of 
// only occuping unique values. After this, traverse the vectors using two pointer and add the equal elements and
// if not then increment the interating variable of that vector whose element is smaller than the other's.
// Finally copy the elements of set to vector and return the resultant vector.  

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        Set<int> s;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                s.insert(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        vector<int> ans;
        for (auto i : s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};