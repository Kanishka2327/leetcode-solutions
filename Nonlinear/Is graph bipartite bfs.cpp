class Solution {
public:
    bool BfsBipartite(vector<vector<int>>& graph , int curr ,vector<int> &color, int currColor ){
        queue<int> que;
        que.push(curr);
        color[curr] = currColor; //current node is colored first

        while(!que.empty()){
            int u = que.front();
            que.pop();

            for(int &v : graph[u]){ 
                if(color[v] == color[u]){ //if adj node has same color
                    return false;
                }
                else if(color[v] == -1){ //if node is not colored or visited
                    color[v] = 1-color[u]; //change color 
                    que.push(v); //push in que
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V , -1); //all nodes are not colored initially
        //red = 1 
        //green = 0
        for(int i =0 ; i < V ; i++){
            if(color[i] == -1){
                if(!BfsBipartite(graph , i , color, 1)) //if not bipartite return false
                return false;
            }
        }
        return true;
    }
};