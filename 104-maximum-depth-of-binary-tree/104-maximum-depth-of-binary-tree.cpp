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
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode*> fifo;
        fifo.push(root);
        fifo.push(nullptr);
        int depth = 0;
        while(!fifo.empty()){
            TreeNode* p = fifo.front();
            fifo.pop();
            if(p){
                if(p->left)
                    fifo.push(p->left);
                if(p->right)
                    fifo.push(p->right);
            }else{
                depth++;
                if(!fifo.empty())
                    fifo.push(nullptr);    
            }
        }
        
        return depth;
    }
};