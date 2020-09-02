class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int p = 1<<n;
        vector<vector<int>> res(p);
        
        for(int k=0;k<p;k++){
            for(int i=0;i<n;i++){
                if((k >> i) & 1){
                    res[k].push_back(nums[i]);
                }
            }
                
        }
        return res;
    }
};
