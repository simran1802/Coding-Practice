class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());
        int ans=1;
        for(auto i:coins){
            if(i>ans)
               break; 
            ans += i;
        }
        return ans;
    }
};
