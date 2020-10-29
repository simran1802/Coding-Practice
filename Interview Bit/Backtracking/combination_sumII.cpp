void comb(vector<vector<int>> &res,vector<int> &temp,vector<int> &A,int target,int start){
    if(target==0){
        res.push_back(temp);
        return ;
    }
    if(target<0)
        return ;
    for(int i=start;i<A.size();i++){
        if(i==start || A[i]!=A[i-1]){
            temp.push_back(A[i]);
            comb(res,temp,A,target-A[i],i+1);
            temp.pop_back();
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    vector<int> temp;
    comb(ans,temp,A,B,0);
    return ans;
}
