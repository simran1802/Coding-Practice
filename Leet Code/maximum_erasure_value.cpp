class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        
        // create prefix sum array
        vector<int> pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1] = pre[i]+nums[i];
        }
        
        int s=0;
        vector<int> tmp(10001,-1);
        int res=0;
        for(int i=0;i<n;i++){
            s = max(s,tmp[nums[i]]+1);
            res = max(res,pre[i+1]-pre[s]);
            tmp[nums[i]] = i;
        }
        return res;
    }
};
