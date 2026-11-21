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
    
    vector<int>temp;
    
    void sum(TreeNode* root){

        if(root == NULL){
            return ;
        }

        sum(root->left);
        temp.push_back(root->val);
        sum(root->right);

    }
    bool findTarget(TreeNode* root, int k) {
        sum(root);
        int i=0;
        int j=temp.size()-1;

        while(i<j){
            
            int current_sum = temp[i]+temp[j];

            if(current_sum == k){
                return true;
            }

            else if(current_sum > k){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};