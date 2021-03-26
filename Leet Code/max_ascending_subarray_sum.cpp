class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int s=nums[0],mx_sum=0;
        for(auto i=1;i<nums.size();++i){
            if(nums[i]<=nums[i-1]){
                mx_sum = max(s,mx_sum);
                s=0;
            }
            s += nums[i];
        }
        return max(s,mx_sum);
    }
};
