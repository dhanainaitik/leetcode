class Solution {
    int valid = 1; // State variable to track if the tree is balanced

public:
    int checkHeight(TreeNode* root) {
        // Base case: An empty tree has a height of 0
        if (root == nullptr) {
            return 0;
        }

        // Recursively find the height of left and right subtrees
        int lh = checkHeight(root->left);
        int rh = checkHeight(root->right);

        // If the absolute difference between heights is greater than 1, mark as invalid
        if (abs(lh - rh) > 1) {
            valid = 0;
        }

        // Return the actual height of the current node
        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        valid = 1; // Reset tracker for each test case
        checkHeight(root);
        return valid == 1;
    }
};
