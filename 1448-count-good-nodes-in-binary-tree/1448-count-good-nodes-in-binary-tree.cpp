/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int search(TreeNode* curr , int maxvalue){
        if(curr == NULL){
            return 0;
        }
        
        int count = 0;

        if(curr->val >= maxvalue){

            count+=1;
            maxvalue = curr->val;

        }

        count+=search(curr->left,maxvalue);
        count+=search(curr->right,maxvalue);
        return count;
    }
    int goodNodes(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
       if(root->left == NULL && root->right == NULL){
        return 1;
       }

       int total_good = 1;

        total_good += search(root->left, root->val);
        total_good += search(root->right, root->val);
        
        return total_good;


    }
};