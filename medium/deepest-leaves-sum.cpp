class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
    if(!root){
      return 0;
    }
    int sum;
    queue<TreeNode*> queue;
    queue.push(root);

    while(!queue.empty()){
      int q_size = queue.size();
      sum = 0;
      for(int i = 0; i < q_size; i++){
       TreeNode* node = queue.front();
       sum+= node-> val; 
       queue.pop();
       if(node->left){
          queue.push(node->left);
       }
        if(node->right){
          queue.push(node->right);
       }
      }


    }

      return sum; 
    }
};
