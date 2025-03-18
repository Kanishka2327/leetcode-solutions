class Solution {
public:
    bool isCycledfs(unordered_map<int, vector<int>> &adj, int u , vector<bool>& visited, vector<int>& inRecur){
        visited[u] = true;
        inRecur[u] = true;

    for(int &v : adj[u]){
        if(!visited[v] && isCycledfs(adj , v , visited , inRecur)){
            return true;
        }
        else if(inRecur[v]== true){
            return true;
        }
    }
    inRecur[u] = false;
    return false;

    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> adj;
        vector<bool> visited(numCourses, false);
        vector<int> inRecur(numCourses, false);

        for(auto &v: prerequisites){
            int a = v[0];
            int b = v[1];
            adj[b].push_back(a);

        }
        for(int i =0; i< numCourses ;i++){
            if(!visited[i] && isCycledfs(adj , i , visited, inRecur)){
                return false; // cycle is detected 
            }

        }
        return true; // cycle not detected
    }
};
