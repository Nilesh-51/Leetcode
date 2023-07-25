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
        queue<TreeNode*> q;
        vector<vector<int>> res;
        int flag=0;
        if(!root)return res;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int> level;
            for(int i=0;i<sz;i++){
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                if(q.front()->right){
                    q.push(q.front()->right);
                }
                level.push_back(q.front()->val);
                q.pop();
            }
            if(flag){
                reverse(level.begin(),level.end());
                flag=0;
            }
            else{
                flag=1;
            }
            res.push_back(level);
        }
        return res;
    }
};
