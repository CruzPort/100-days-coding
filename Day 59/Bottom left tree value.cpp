class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int lastLeftNode = -1;
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()) {
            int levelSize = q.size();
            
            for (int i = 0; i < levelSize; i++) {                
                TreeNode* parent = q.front();
                q.pop();
                
                if (i == 0) {
                    lastLeftNode = parent->val;
                }
                
                if (parent->left) {
                    q.push(parent->left);
                }
                
                if (parent->right) {
                    q.push(parent->right);
                }
            }
        }
        
        return lastLeftNode;
    }
};
