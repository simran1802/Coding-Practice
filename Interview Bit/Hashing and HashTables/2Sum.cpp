vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int,int> res;
    vector<int> tmp;
    for(int i=0;i<A.size();i++){
        if(res.find(A[i]) == res.end()){
            if(res.find(B-A[i]) == res.end())
                res[B-A[i]] = i;
            }
            else{
                tmp.push_back(res[A[i]] +1);
                tmp.push_back(i+1);
                return tmp;
            }
        
    }
    return tmp;
}
