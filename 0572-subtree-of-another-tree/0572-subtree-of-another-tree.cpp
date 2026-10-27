class Solution {
public:
    // Helper function to check if two trees are completely identical
    bool isSameTree(TreeNode* s, TreeNode* t) {
        // If both reach the end, they are identical up to this point
        if (s == nullptr && t == nullptr) return true;
        
        // If only one reaches the end, or values mismatch, they are not identical
        if (s == nullptr || t == nullptr || s->val != t->val) return false;
        
        // Recursively check left and right structures
        return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // If the main tree is empty, subRoot cannot be a subtree
        if (root == nullptr) return false;
        
        // If we find a matching root value, check if the trees are identical
        if (root->val == subRoot->val) {
            if (isSameTree(root, subRoot)) {
                return true;
            }
        }
        
        // If they weren't identical (or values didn't match), 
        // continue searching down the left and right children of 'root'
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
