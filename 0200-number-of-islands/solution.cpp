class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count=0;
        int delR[]={-1,0,1,0};
        int delC[]={0,1,0,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    count++;
                    q.push({i,j});
                    vis[i][j]=1;
                    while(!q.empty()){
                        int row=q.front().first;
                        int col=q.front().second;
                        q.pop();
                        for(int delRow=0;delRow<4;delRow++){
                                int nrow=delR[delRow]+row;
                                int ncol=delC[delRow]+col;
                                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                                    vis[nrow][ncol]=1;
                                    q.push({nrow,ncol});
                                }
                        }
                    }
                }
            }
        }
        return count;
    }
};
