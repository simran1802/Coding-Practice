class Solution {
public:
    int jump(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int end = 0, steps=0, max_end=0;
        while(end < n-1){
            steps++;
            for(;i<=end;i++){
                max_end = max(max_end, i+nums[i]);
                if(max_end >= n-1)
                    return steps;
                
            }   
            if(end == max_end)
                break;
            end=max_end;
        }
        return n == 1 ? 0 : -1;
    }
};
