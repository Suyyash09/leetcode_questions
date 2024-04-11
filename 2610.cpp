class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        int freq[201]={0};
        for (int i: nums ) {
            int& f=freq[i];
            if(f==ans.size())
                ans.push_back({i});
            else
                ans[f].push_back(i);
            f++;
        }
        return ans;
    }
};