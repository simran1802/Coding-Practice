class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int level = 0;
        int water = 0;
        while(left<=right){
            int lower = height[height[left] <= height[right] ? left++:right--];
            level = max(lower,level);
            water += level - lower;
            
        }
        return water;
            
    }
};
