class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            res[0] += nums[i]-nums[0];
        }
        
        for(int j=1;j<nums.size();j++){
            res[j] = res[j-1]+(nums[j]-nums[j-1])*j-(nums[j]-nums[j-1])*(nums.size()-j);
        }
        return res;
    }
};
