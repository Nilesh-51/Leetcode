/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
        map<Node*,Node*> mp;
        queue<Node*> q;
        q.push(node);
        int vis[101]={0};
        vis[node->val]=1;
        Node *root=new Node(node->val);
        mp[node]=root;
        while(!q.empty()){
            Node *temp=q.front();
            q.pop();
            
            for(auto it:temp->neighbors){
                if(!vis[it->val]){
                    Node *newNode=new Node(it->val);
                    vis[it->val]=1;
                    mp[it]=newNode;
                    q.push(it);
                }
                mp[temp]->neighbors.push_back(mp[it]);
            }
        }
        return root;
    }
};
