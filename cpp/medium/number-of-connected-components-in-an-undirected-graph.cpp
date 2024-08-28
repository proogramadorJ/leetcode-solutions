class Solution {
public:
    int ans = 0;
    unordered_map<int, vector<int>> adj;
    vector<bool> seen;
    void dfs(int v){
       for(int v : adj[v]) {
           if(!seen[v]){
               seen[v] = true;
               dfs(v);
           }
       }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        seen = vector(n, false);
        for(auto v: edges){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }

        for(int i = 0; i < n; i++){
            if(!seen[i]){   
                ans++;
                seen[i] = true;
                dfs(i);
            }
        }
        

    return ans;  
    }
};
