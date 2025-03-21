class Solution {
public:
    bool hasCycle;

    void dfs(unordered_map<int , vector<int>> &adj, int u , vector<bool> &visited,stack<int> &st, vector<bool>& inRecur){
        visited[u] = true;
        inRecur[u] = true;
        for(int &v : adj[u]){
            if(inRecur[v] == true){
                hasCycle = true;
                return ;
            }
            if(!visited[v]){
                dfs(adj , v, visited , st , inRecur);
            }
        }
        st.push(u);
        inRecur[u] = false;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int , vector<int>> adj;
        vector<bool> inRecur(numCourses, false);
        vector<bool> visited(numCourses, false);
        hasCycle = false;

        for(auto &v : prerequisites){
            int a = v[0];
            int b = v[1];

            adj[b].push_back(a);
        }
        stack<int> st;

        for(int i =0 ; i <numCourses ; i++ ){
            if(!visited[i]){
                dfs(adj , i , visited, st, inRecur);
            }
        }
        if(hasCycle == true){
            return {};
        }
        vector<int> result;

        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};