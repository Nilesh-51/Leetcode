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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int inStart=0,inEnd=inorder.size()-1;
        int postStart=0,postEnd=postorder.size()-1;
        unordered_map<int,int> mpp;
        for(int i=0;i<=inEnd;i++){
            mpp[inorder[i]]=i;
        }
        return construct(inorder,inStart,inEnd,postorder,postStart,postEnd,mpp);
    }
    TreeNode* construct(vector<int> &inorder,int inStart,int inEnd,vector<int> &postorder,int postStart,int postEnd,unordered_map<int,int> &mpp){
        if(inStart>inEnd || postStart>postEnd)return NULL;
        TreeNode* root=new TreeNode(postorder[postEnd]);
        int inRoot=mpp[root->val];
        int numsLeft=inEnd-inRoot;
        root->left=construct(inorder,inStart,inRoot-1,postorder,postStart,postEnd-numsLeft-1,mpp);
        root->right=construct(inorder,inRoot+1,inEnd,postorder,postEnd-numsLeft,postEnd-1,mpp);
        return root;
    }
};
