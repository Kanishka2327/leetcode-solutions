class Solution {
public:
    bool DFS(vector<vector<int>>& adj, int u,vector<bool> &visited ,vector<bool> &currvisited){
        visited[u] = true;
        currvisited[u] = true;// Mark the node as being in the current DFS stack

        for(auto & v : adj[u]){ //traverse all neighbors 
            if(!visited[v]){ //if neighbor not visited
                if(DFS(adj , v , visited , currvisited)){ //recursive dfs calls 
                    return true; //cycle detected
                }
            }else if(visited[v] && currvisited[v]){ //neighbor is in curr recursive stack
                return true; //cycle detected
            }
        }
        currvisited[u] = false; //backtrack recursion remove node 
        return false; //no cycle found
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<bool> visited(numCourses , false), currvisited(numCourses , false);
//we are making an adj list from this for loop
        for(auto &v : prerequisites){
            int a = v[0];
            int b = v[1];
            
            adj[b].push_back(a);    
        }

        for(int i =0 ; i <numCourses  ;i++){
            if(!visited[i]){
                if(DFS(adj ,i, visited, currvisited)){ 
                    return false;//if cycle return false
                }
            }
        }
        return true; //no cycle 
    }
};