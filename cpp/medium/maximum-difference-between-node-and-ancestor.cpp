class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* node, int minCurrent, int maxCurrent){
        if(node == nullptr){
            return;
        }

        ans = max(ans, max(maxCurrent, node->val) - min(minCurrent, node->val));
        minCurrent = min(node->val, minCurrent);
        maxCurrent = max(node->val, maxCurrent);
        dfs(node->left, minCurrent, maxCurrent);
        dfs(node->right, minCurrent, maxCurrent);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        dfs(root, root->val, root->val);
        return ans;
    }
};
