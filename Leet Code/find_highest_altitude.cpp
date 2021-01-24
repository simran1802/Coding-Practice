class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_gain=0, cur_gain=0;
        for(int i=0;i<gain.size();i++){
            cur_gain += gain[i];
            max_gain = max(cur_gain,max_gain);
        }
        return max_gain;
        
    }
};
