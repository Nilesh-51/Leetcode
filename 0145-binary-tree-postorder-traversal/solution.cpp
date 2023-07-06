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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(!root)return postorder;
        stack<TreeNode*> s1,s2;
        s1.push(root);
        while(true){
            if(s1.empty())break;
            s2.push(s1.top());
            s1.pop();
            TreeNode *temp=s2.top();
            if(temp->left)
            s1.push(temp->left);
            if(temp->right)
            s1.push(temp->right);
        }
        while(!s2.empty()){
            TreeNode *temp=s2.top();
            postorder.push_back(temp->val);
            s2.pop();
        }
        return postorder;
    }
    
};
