class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> result;
        permutation(nums, result, 0);
        return result;
    }

private:
    void permutation(vector<int>& nums, vector<vector<int>>& result, int ind) {
        if (ind == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {
            swap(nums[i], nums[ind]);
            permutation(nums, result, ind + 1);
            swap(nums[i], nums[ind]);
        }
    }
};