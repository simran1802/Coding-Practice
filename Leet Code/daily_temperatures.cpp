class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> res(T.size());
        for(int i=T.size()-1;i>=0;--i){
            int j=i+1;
            while(j<T.size() && T[j]<=T[i]){
                if(res[j] > 0)
                    j = res[j]+j;
                else
                    j=T.size();
                
            }
            if(j<T.size())
                res[i] = j-i;
        }
        return res;
    }
};
