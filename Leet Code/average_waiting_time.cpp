class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wait=0, cur=0;
        int n=customers.size();
        for(auto &i:customers){
            cur = max(cur,1.0*i[0])+i[1];
            wait += cur-i[0];  
        }
        return 1.0*wait/n;
    }
};
