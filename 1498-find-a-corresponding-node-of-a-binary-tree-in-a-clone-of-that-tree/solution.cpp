/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* res;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        ans(cloned,target);
        return res;
    }
    void ans(TreeNode* clone,TreeNode* target){
        if(clone){
            if(clone->val==target->val){
                res=clone;
                return;
            }
            ans(clone->left,target);
            
            ans(clone->right,target);
        }
    }
};
