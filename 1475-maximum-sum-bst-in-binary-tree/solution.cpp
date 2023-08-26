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
 class Data{
     public:
     int maxSum;
     int sum;
     int veryMax;
     int veryMin;
     Data(int minNode,int maxNode,int sum,int ms){
         maxSum=ms;
         this->sum=sum;
         veryMax=maxNode;
         veryMin=minNode;
     }
 };
class Solution {
    Data helper(TreeNode *root){
        if(!root)return Data(INT_MAX,INT_MIN,0,0);

        auto left=helper(root->left);
        auto right=helper(root->right);

        if(left.veryMax<root->val && right.veryMin>root->val){
            return Data(min(root->val,left.veryMin),max(root->val,right.veryMax),left.sum+right.sum+root->val,max(left.sum+right.sum+root->val,max(left.maxSum,right.maxSum)));
        }
            return Data(INT_MIN,INT_MAX,max(left.sum,right.sum),max(left.maxSum,right.maxSum));
    }
public:
    int maxSumBST(TreeNode* root) {
        int res=helper(root).maxSum;
        return res<0?0:res;
    }
    
};
