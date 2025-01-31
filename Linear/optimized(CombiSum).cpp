class Solution {
public:
    void GetAllCombi(vector<int>& arr, int i, int tar, vector<vector<int>>& ans, vector<int>& combi) {
        if (tar == 0) {  
            ans.push_back(combi);  // Store valid combination
            return;
        }

        for (int j = i; j < arr.size(); j++) {
            if (arr[j] > tar) break;  // Early pruning (if arr[j] > tar, no need to proceed)

            combi.push_back(arr[j]);  // Pick current element
            GetAllCombi(arr, j, tar - arr[j], ans, combi);  // Stay at `j` for repetition
            combi.pop_back();  // Backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> combi;
        
        sort(arr.begin(), arr.end());  // Ensure sorted order for pruning
        GetAllCombi(arr, 0, tar, ans, combi);
        
        return ans;
    }
};
