class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        helper(res,temp,candidates,0,target);
        return res;
    }
    
    private:
        void helper(vector<vector<int>> &res,vector<int> &temp,vector<int> &candidates,int start,int target){
        if(target==0){
            res.push_back(temp);
            return;
        }
        if(target<0)
            return;
        for(int i=start;i<candidates.size();i++){
            if(i==start || candidates[i]!=candidates[i-1]){
                temp.push_back(candidates[i]);
                helper(res,temp,candidates,i+1,target-candidates[i]);
                temp.pop_back();
            }
        }
    }
};
