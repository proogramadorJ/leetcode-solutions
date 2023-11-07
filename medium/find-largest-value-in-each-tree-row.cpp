class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
    if(!root) {
      return vector<int>{};
    }
    vector<int> ans;
    queue<TreeNode*> queue;
    queue.push(root);
       
    while(!queue.empty()){      
      int levelSize = queue.size();
      int maxCurrent = INT_MIN;
      for(int i = 0; i < levelSize; i++){
        TreeNode* node = queue.front();
        maxCurrent = max(maxCurrent, node->val);
        
        if(node->left){
            queue.push(node->left);
        }
        if(node->right){
            queue.push(node->right);
        }
        queue.pop();
      }
      ans.push_back(maxCurrent);     
    }
      return ans;
    }
};
