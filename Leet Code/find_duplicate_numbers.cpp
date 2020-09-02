class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left=1;
        int right = nums.size()-1;
        while(left<right){
            int mid = left + (right-left)/2;
            int n=0;
            for(int num:nums){
                 n += num <= mid;
            }
            n<=mid ? left=mid+1 : right=mid; 
        }
        return left;
    }
};
