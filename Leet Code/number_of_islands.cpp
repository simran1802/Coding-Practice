class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(),n = m ? grid[0].size() :0, island=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1'){
                    island++;
                    check(grid,i,j);
                }
            }
        }
        return island;
    }
    
    private:
        void check(vector<vector<char>> &grid,int i,int j){
            int m = grid.size();
            int n = grid[0].size();
            if(i<0 || j<0 || i==m || j==n || grid[i][j]=='0')
                return ;
            
            grid[i][j] = '0';   //initially at 0
            check(grid,i-1,j);
            check(grid,i+1,j);
            check(grid,i,j-1);
            check(grid,i,j+1);
        }
};
