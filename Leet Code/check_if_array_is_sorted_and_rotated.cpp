class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size(), k=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n])
                ++k;
            if(k>1)
                return false;
        }
        return true;
        
    }
};
