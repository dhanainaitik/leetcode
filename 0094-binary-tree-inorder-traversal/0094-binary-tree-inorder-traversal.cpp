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
   vector<int> inorderTraversal(TreeNode* root) {
    stack<TreeNode*> s;
    stack<bool> visited;
    
    if (root == nullptr) {
        return {};
    }
    s.push(root);
    visited.push(0);
    
    vector<int> answer;
    
    while (!s.empty()) {
       
        TreeNode* temp = s.top();
        s.pop();
        
        bool flag = visited.top();
        visited.pop();
        
        
        if (!flag) {
            
            if (temp->right) {
                s.push(temp->right);
                visited.push(0);
            }

            s.push(temp);
            visited.push(1);
             
            if (temp->left) {
                s.push(temp->left);
                visited.push(0);
            }
        } 
       
        else {
           
            answer.push_back(temp->val);
        }
    }
    
    return answer;
}
};