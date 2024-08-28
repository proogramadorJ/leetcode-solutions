class Solution {
public:
    int dfs(TreeNode* root){
      if(root == nullptr) {
        return 0;
      }
      if(!root->left){
        return dfs(root->right) + 1;
      }else
      if(!root->right){
        return dfs(root->left) + 1;
      }
      return min(dfs(root->left), dfs(root->right)) + 1;
    }
    int minDepth(TreeNode* root) {
          return dfs(root);
    }
};
