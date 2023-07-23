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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p && q && p->val==q->val){
            bool first=isSameTree(p->left,q->left);
            bool second=isSameTree(p->right,q->right);
            return (first && second);
        }
        else{
            if(!p && !q){
                return true;
            }
            else
            return false;
        }
    }
};
