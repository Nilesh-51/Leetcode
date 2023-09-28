class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<int> cur(grid[0].size()),prev(grid[0].size());
        for(int i=grid.size()-1;i>=0;i--){
            for(int j=grid[i].size()-1;j>=0;j--){
                if(i==grid.size()-1 && j==grid[0].size()-1){cur[j]=grid[i][j];continue;}
                int pick=INT_MAX,notPick=INT_MAX;
            if(i!=grid.size()-1)
            pick=grid[i][j]+prev[j];
            if(j!=grid[i].size()-1)
            notPick=grid[i][j]+cur[j+1];
            cur[j]=min(pick,notPick);
            }
            prev=cur;
        }
        return prev[0];
    }
};
