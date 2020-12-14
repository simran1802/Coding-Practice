class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size(), max_area=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    max_area = max(max_area,helper(grid,i,j));
            }
        }
        return max_area;
    }
    
    int helper(vector<vector<int>> &grid,int i,int j){
        int n=grid.size(),m=grid[0].size();
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==1){
            grid[i][j]=0;
            return 1 + helper(grid,i+1,j) + helper(grid,i-1,j) + helper(grid,i,j+1) + helper(grid,i,j-1);
        }
        return 0;
    }
};
