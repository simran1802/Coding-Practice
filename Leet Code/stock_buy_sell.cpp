class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        for(int c=1;c<prices.size();c++){
            res += max(0,prices[c]-prices[c-1]);
        }
        return res;
    }
};
