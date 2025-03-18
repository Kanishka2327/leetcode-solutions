
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycledfs(vector<vector<int>>& adj, int u,vector<bool> &visited, int parent ){
        visited[u] = true;
        for(int &v : adj[u]){
            if(v == parent) continue;
            if(visited[v] == true) return true;


            if(isCycledfs(adj , v, visited, u)){
                return true;
            }
        }
        return false;
    }
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
        vector<bool> visited(V, false);
        
        for(int i=0; i<V;i++){
            if(!visited[i] && isCycledfs(adj, i , visited , -1)) return true;
        }
        return false;
    }
};