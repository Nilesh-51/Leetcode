/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)return "";
        string result="";
        queue<TreeNode*> q;
        q.push(root);
      while(!q.empty()){
          TreeNode* temp=q.front();
          q.pop();
          if(!temp)result+="#,";
          else
          result+=to_string(temp->val)+",";
          if(temp){
            q.push(temp->left);
          q.push(temp->right);  
          }
          
      }
      return result;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="")return NULL;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode *root=new TreeNode(stoi(str));
        queue<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.front();
            st.pop();
            getline(s,str,',');
            if(str=="#"){
                temp->left=NULL;
            }
            else{
                TreeNode* l=new TreeNode(stoi(str));
                temp->left=l;
                st.push(l);
            }
            getline(s,str,',');
            if(str=="#"){
                temp->right=NULL;
            }
            else{
                TreeNode* r=new TreeNode(stoi(str));
                temp->right=r;
                st.push(r);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
