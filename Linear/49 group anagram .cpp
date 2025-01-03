class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string , vector<string>> umap;

        for(auto x : strs){
            string t = x;
            sort(x.begin(), x.end());
            umap[x].push_back(t);
        }
        for(auto& pair : umap){
            ans.push_back(pair.second);
        }
        return ans;
    }
};