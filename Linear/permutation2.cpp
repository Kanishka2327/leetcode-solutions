class Solution {
public:
    void calculate(vector<int>& a, vector<vector<int>>& ans,int start){
        if(start == a.size()){
            ans.push_back(a);
            return;
        }
        unordered_set<int> uniques;
        for(int i=start; i<a.size(); i++){
            if(uniques.find(a[i])!= uniques.end()) continue;
            uniques.insert(a[i]);
            swap(a[i], a[start]);
            calculate(a,ans,start+1);
            swap(a[i], a[start]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& a) {
        vector<vector<int>> ans;
        calculate(a, ans,0);
        return ans;
    }
};