class Solution {
public:
    bool dfsBipartite(vector<vector<int>>& graph, int curr ,vector<int> &color, int currColor ){
        color[curr] = currColor; //color current node 
 
        //go to adj nodes of current node
        for(int &v : graph[curr]){
            if(color[v] == color[curr]){//equal to adj node then false
                return false;
            }
            if(color[v] == -1){ //never colored or visited node
            int colorOfV = 1 - currColor; //change color
            
            if(dfsBipartite(graph, v , color , colorOfV)== false)
            return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size() ;
        vector<int> color(V , -1); //no node is colored in start
        //red =1;
        //green =0;

        for(int i =0; i<V ;i++){
            if(color[i] == -1){ //if no visited or colored then only move to nested if of dfsBipartite
                if(dfsBipartite(graph , i , color , 1) == false )
                    return false; 
            }
        }
        return true;

    }
};