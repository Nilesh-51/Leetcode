class Solution {
    bool dfs(vector<vector<int>> &graph,vector<int> &color,int node,int col){
        color[node]=col;
        for(auto it:graph[node]){
            if(color[it]==-1){
                if(!dfs(graph,color,it,!col)){
                    return false;
                }
            }
            else if(color[node]==color[it]){
                return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                if(!dfs(graph,color,i,0))
                return false;
            }
        }
       return true;
    }
};
