class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty())
            return 0; 
        const int m = matrix.size(), n = matrix[0].size();
        int left[n], right[n], height[n];
        fill_n(left,n,0);
        fill_n(right,n,n);
        fill_n(height,n,0);
        int max_area = 0;
        
        for(int i=0;i<m;i++){
            
            // Compute height
            int cur_left=0, cur_right=n;
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '1')
                    height[j]++;
                else
                    height[j] = 0;
                
            }
            // Compute left
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '1')
                    left[j] = max(left[j],cur_left);
                else{
                    left[j] = 0;
                    cur_left=j+1;
                }
            }
            
            // Compute right
            for(int j=n-1;j>=0;j--){
                if(matrix[i][j] == '1')
                    right[j] = min(cur_right,right[j]);
                else{
                    right[j] = n;
                    cur_right = j;
                }
            }
            
            for(int j=0;j<n;j++){
                max_area = max(max_area,(right[j]-left[j])*height[j]);
            }
        }
        return max_area;
    }
};
