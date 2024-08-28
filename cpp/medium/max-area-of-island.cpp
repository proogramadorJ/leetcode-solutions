#include<vector>
#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int ans = 0;
    vector<bool> visited;
    unordered_map<int,vector<int>> adj;

    void dfs(int vertex, int maxSoFar){
       for(int &v : adj[vertex]) {
           if(!visited[v]){
               visited[v] = true;
               maxSoFar++;
               ans = max(ans, maxSoFar);
               dfs(v, maxSoFar);
           }
       }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
       std:: cout << "n size " << n<<endl; 
        visited = vector<bool>(12, false);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    cout << "puting " << j << " into " << i << " adjancency list"<<endl;
                    adj[i].push_back(j);
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(!visited[i]){
                visited[i] = true;
                dfs(i, 1);
            }
        }
       return ans; 
    }
};

int main(){
  Solution s;
  vector<vector<int>> v;

  v.push_back({0,0,1,0,0,0,0,1,0,0,0,0,0});
  v.push_back({0,0,0,0,0,0,0,1,1,1,0,0,0});
  v.push_back({0,1,1,0,1,0,0,0,0,0,0,0,0});
  v.push_back({0,1,0,0,1,1,0,0,1,0,1,0,0});
  v.push_back({0,1,0,0,1,1,0,0,1,1,1,0,0});
  v.push_back({0,0,0,0,0,0,0,0,0,0,1,0,0});
  v.push_back({0,0,0,0,0,0,0,1,1,1,0,0,0});
  v.push_back({0,0,0,0,0,0,0,1,1,0,0,0,0});

  cout << "ans " <<s.maxAreaOfIsland(v);
  return 0;
}
