class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> com;
        backtrack(1,n,k,com , result);
        return result;
    }
private:
    void backtrack(int start, int n , int k, vector<int>& com , vector<vector<int>>& result){
        if(com.size() ==k){
            result.push_back(com);
            return;
            }
            for(int i =start;i<=n;i++){
                com.push_back(i);
                backtrack(i+1, n , k , com , result);
                com.pop_back();
            }
    }
};