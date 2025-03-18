
class Solution {
  public:
    // Function to return list containing vertices in Topological order.
    void DFS(vector<vector<int>>& adj, int u, vector<bool>& visited,stack<int>& st ){
        visited[u] = true;
        
        for(int &v : adj[u]){
            if(!visited[v]){
                DFS(adj , v , visited , st);
            }
        }
        st.push(u);
    }
    
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        // Your code here
        int V = adj.size();
        vector<bool> visited(V, false);
        stack<int> st;
        
        for(int i =0; i< V ;i++){
            if(!visited[i]){
                DFS(adj , i , visited , st);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};