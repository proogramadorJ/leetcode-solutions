class Solution {
public:
    int ans = 0;
    unordered_map<int, vector<int>> adj;
    unordered_set<int> restri;
    vector<bool> visited;

    void dfs(int node){
        for(auto &v : adj[node]){
            if((!visited[v]) && restri.find(v) == restri.end()){
                visited[v] = true;
                ans++;
                dfs(v);
            }
        }        
    }

    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        visited = vector(edges.size(), false);
        for(auto &i : restricted){
            restri.insert(i);
        }
        for(auto &v: edges){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        visited[0] = true;
        dfs(0);
        return ans + 1;
    }
};
