class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr) {
            return vector<int>{};
        }
        
        vector<int> ans;
        queue<TreeNode*> queue;
        queue.push(root);
        
        while (!queue.empty()) {
            int currentLength = queue.size();
            ans.push_back(queue.back()->val);
            
            for (int i = 0; i < currentLength; i++) {
                TreeNode* node = queue.front();
                queue.pop();
                
                if (node->left) {
                    queue.push(node->left);
                }
                
                if (node->right) {
                    queue.push(node->right);
                }
            }
        }
        
        return ans;
    }
};
