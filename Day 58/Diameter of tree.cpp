

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        calculateDiameter(root, diameter);
        return diameter;
    }


    int calculateDiameter(TreeNode* root, int& diameter) {
        if (!root) {
            return 0;
        }

        // Recursively calculate the height of the left and right subtrees
        int leftHeight = calculateDiameter(root->left, diameter);
        int rightHeight = calculateDiameter(root->right, diameter);

        // Update the diameter if the current node's diameter is greater
        diameter = max(diameter, leftHeight + rightHeight);

        // Return the height of the current subtree
        return 1 + max(leftHeight, rightHeight);
    }
};
    
