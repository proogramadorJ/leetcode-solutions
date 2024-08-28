class Solution {
public:
 
    unordered_map<int, vector<int>> adj;
    unordered_map<int, bool> seen;
    int target;

    void dfs(int vertex) {
       for(int v : adj[vertex]){
           if(!seen[v]){
               seen[v] = true;
               if(v == target)
                 return; 
               dfs(v);
           }
       }
    }

       bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination)
            return true;
        int size = edges.size();
        target = destination;

        for(auto v: edges){       
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        dfs(source);
        
        return seen.find(destination) != seen.end();
    }
    
};
