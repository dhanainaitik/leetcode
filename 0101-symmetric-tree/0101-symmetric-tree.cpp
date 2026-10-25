
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        queue<TreeNode*> leftTree;
        queue<TreeNode*> rightTree;

        leftTree.push(root->left);
        rightTree.push(root->right);

        while (!leftTree.empty() && !rightTree.empty()) {
            TreeNode* leftNode = leftTree.front();
            leftTree.pop();

            TreeNode* rightNode = rightTree.front();
            rightTree.pop();

            if (leftNode == NULL && rightNode == NULL) {
                continue;
            }

            if (leftNode == NULL || rightNode == NULL) {
                return false;
            }

            if (leftNode->val != rightNode->val) {
                return false;
            }

            // Left subtree: left, then right
            leftTree.push(leftNode->left);
            leftTree.push(leftNode->right);

            // Right subtree: right, then left
            rightTree.push(rightNode->right);
            rightTree.push(rightNode->left);
        }

        return true;
    }
};
