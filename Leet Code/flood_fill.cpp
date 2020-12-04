class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] != newColor)
            dfs(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
    private:
        void dfs(vector<vector<int>>& image,int i,int j,int old_col,int new_col){
            if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=old_col)
                return ;
            image[i][j] = new_col;
            dfs(image,i,j-1,old_col,new_col);
            dfs(image,i,j+1,old_col,new_col);
            dfs(image,i-1,j,old_col,new_col);
            dfs(image,i+1,j,old_col,new_col);
        }
};
