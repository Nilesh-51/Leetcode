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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder;
        inorder.insert(inorder.end(),preorder.begin(),preorder.end());
        sort(inorder.begin(),inorder.end());
        unordered_map<int,int> mpp;
        int n=inorder.size();
        for(int i=0;i<n;i++){
            mpp[inorder[i]]=i;
        }
        TreeNode* root=construct(preorder,inorder,0,preorder.size()-1,0,n-1,mpp);
        return root;

    }
    TreeNode* construct(vector<int>& preorder, vector<int>& inorder,int preStart,int preEnd,int inStart,int inEnd,unordered_map<int,int> mpp){
        if(preStart>preEnd || inStart>inEnd)return NULL;
        TreeNode* root=new TreeNode(preorder[preStart]);
        int inRoot=mpp[root->val];
        int numsLeft=inRoot-inStart;
        root->left=construct(preorder,inorder,preStart+1,preStart+numsLeft,inStart,inRoot-1,mpp);
        root->right=construct(preorder,inorder,preStart+numsLeft+1,preEnd,inRoot+1,inEnd,mpp);

        return root;
    }
};
