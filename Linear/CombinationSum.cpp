class Solution {
public:
    set<vector<int>> s;
    void GetAllCombi(vector<int>& arr, int i,int tar, vector<vector<int>>& ans,vector<int>& combi ){
    
        if(i ==arr.size() || tar <0)
        return;

        if(tar==0){
            if(s.find(combi) == s.end()){
                ans.push_back(combi);
                s.insert(combi);
            }
            
            return;
        }

        combi.push_back(arr[i]);
        //single include
        GetAllCombi(arr, i+1, tar-arr[i], ans, combi);
        //multiple include
        GetAllCombi(arr, i, tar-arr[i], ans , combi);
        //backtrack
        combi.pop_back();
        //exclusion
        GetAllCombi(arr, i+1, tar, ans, combi);

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> combi;

        GetAllCombi(arr, 0, tar, ans , combi);
        return ans;
        
    }
};