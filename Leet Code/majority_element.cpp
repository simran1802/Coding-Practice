class Solution {
    
private:
    int majority(vector<int>& nums,int left,int right){
        if(left== right)
            return nums[left];
        int mid = left+(right-left)/2;
        int left_mid = majority(nums,left,mid);
        int right_mid = majority(nums,mid+1,right);
        if(left_mid == right_mid){
            return left_mid;
        }
        return count(nums.begin()+left, nums.begin()+right+1,left_mid) > 
            count(nums.begin()+left, nums.begin()+right+1,right_mid) ? left_mid: right_mid;
    }
public:
    int majorityElement(vector<int>& nums) {
        return majority(nums,0,nums.size()-1);
    }
};
