class Solution {
public:
    vector<vector<int>> ans;

    void helper(vector<int>& nums, int index, vector<int>& current) {
        if (index == nums.size()) {
            ans.push_back(current);
            return;
        }

        // not pick
        helper(nums, index + 1, current);

        // pick
        current.push_back(nums[index]);
        helper(nums, index + 1, current);
        current.pop_back();

    }

    

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> current;
        helper(nums, 0, current);
        return ans;

        return ans;

    }
};
