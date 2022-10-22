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
        vector<int> result;
        vector<TreeNode*> Stack;
        TreeNode *node=root;
        while(true){
            if(node){
                Stack.push_back(node);
                node=node->left;
            }
            else{
                if(Stack.empty())
                    break;
                node=Stack.back();
                Stack.pop_back();
                result.push_back(node->val);
                node=node->right;
            }
        }
        return result;
    }
};
