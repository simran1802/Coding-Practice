class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size() < 4)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int target_3 = target - nums[i];
            for(int j=i+1;j<nums.size();j++){
                int target_2 = target_3 - nums[j];
                
                int start = j+1;
                int end = nums.size()-1;
                
                while(start < end){
                    int two_sum = nums[start] + nums[end];
                    if(two_sum < target_2)
                        start++;
                    else if(two_sum > target_2)
                        end--;
                    else{
                        vector<int> four_pair(4, 0);
                        four_pair[0] = nums[i];
                        four_pair[1] = nums[j];
                        four_pair[2] = nums[start];
                        four_pair[3] = nums[end];
                        
                        res.push_back(four_pair);
                        
                        while (start < end && nums[start] == four_pair[2]) 
                            ++start;
                        while(start < end && nums[end] == four_pair[3])
                            --end;
                        
                    }
                }
                while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
            }
             while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
        }
        return res;
    }
};
