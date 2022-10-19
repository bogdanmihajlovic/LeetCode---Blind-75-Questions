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
    bool hasPathSum(TreeNode* root, int targetSum) {

        if(!root)
            return false;

        root->val = targetSum - root->val;
        stack<TreeNode*> stack;
        stack.push(root);
        TreeNode* p = root;

        

        while(p || !stack.empty()){

            while(p){
              
                stack.push(p);
              
                // set value
                if(p->left){
                    p->left->val = p->val - p->left->val;
                    if(p->left->val == 0 && (!p->left->left && !p->left->right))
                        return true;
                }
                if(p->right){
                    p->right->val = p->val - p->right->val;
                    if(p->right->val == 0 && (!p->right->left && !p->right->right))
                        return true;
                }
                p = p->left; 
                 
            }

            p = stack.top();
            
            if(p->val == 0 && (!p->left && !p->right))
               return true;
            p = p->right;
            stack.pop();
            
        }

        return false;
    }
};