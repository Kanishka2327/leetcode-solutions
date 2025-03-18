class Solution {
public:
    bool TopologicalsortChcek(unordered_map<int , vector <int>> &adj, int n,vector<int> &indegree ){
        queue<int> que;
        int count =0;
        //put all the nodes in queue according to their indegree values, if a node has indegree 0 it will be inserted 1st
        for(int i =0 ; i< n ;i++){
            if(indegree[i] ==0){
                count++;
                que.push(i);
            }
            }
//after making a queue, while loop until queue got empty
            while(!que.empty()){
                int u = que.front();
                que.pop();
//explore all neighbours of u and dec their indegree 
                for(int &v : adj[u]){
                    indegree[v]--;
//now if indg become 0 , push it in queue and inc the count
                    if(indegree[v] ==0){
                        count++;
                        que.push(v);
                    }
                }
            }
        //if count is equal to number of nodes that is we are able to explore all the nodes and hence there is no cycle 
        if (count ==n){
            return true;
        }
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        unordered_map<int , vector <int>> adj;
        vector<int> indegree(numCourses, 0); //kahn's algo
        for(auto &v : prerequisites){
//b ---> a (first complete b coursethen come to a)
            int a = v[0];
            int b = v[1];
            
            adj[b].push_back(a);
//arrow points to a thatswhy its indeg is increased 
            indegree[a]++;
        }
        return TopologicalsortChcek(adj,numCourses , indegree);
    }
};