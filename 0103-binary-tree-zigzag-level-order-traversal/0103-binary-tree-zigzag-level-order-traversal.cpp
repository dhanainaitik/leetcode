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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);

        vector<vector<int>>res;

        if(root == NULL ){
            return res;
        }
        
        int left_to_right = 0;

        while(!q.empty()){


            int lvl_size = q.size();
            vector<int>temp(lvl_size);

            left_to_right = abs(left_to_right -1);
            

             int first = 0;
                int last = lvl_size-1;
                
            while(lvl_size--){
                
                TreeNode*t = q.front();
                q.pop();
               
                if(left_to_right == 1){
                    temp[first] = t->val;
                    first++;
                }
                else{
                    temp[last] = t->val;
                    last--;
                }

                if(t->left != NULL){
                    q.push(t->left);
                }

                if(t->right != NULL){
                    q.push(t->right);
                }

            }

            res.push_back(temp);
        }

        return res;
    }
};