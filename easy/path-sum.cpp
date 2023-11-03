class Solution {
public:
    int target;
    bool hasPathSum(TreeNode* root, int targetSum) {
       target = targetSum;
       return dfs(root, 0);

    }
  bool dfs(TreeNode* node, int curr){
    if(node == nullptr){
      return false;
    }
    if(node->left == nullptr && node->right == nullptr){
      return curr + node->val == target;
    }
    curr += node->val;
    bool left = dfs(node->left, curr);
    bool right = dfs(node->right, curr);
    return left || right;
  }
};
