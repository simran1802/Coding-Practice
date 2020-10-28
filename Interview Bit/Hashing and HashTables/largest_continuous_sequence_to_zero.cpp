vector<int> Solution::lszero(vector<int> &A) {
    int sum =0;
    vector<int> ans;
    map<int,int> m;
    if( find(A.begin(), A.end(), 0) != A.end())
        ans = vector<int>{0};
    m[0] = -1;
    for(int i=0; i<A.size();i++)
    {
        sum += A[i];
        if(m.find(sum)!= m.end())
        {
            if(i - m[sum] > ans.size())
                ans = vector(A.begin()+ m[sum]+1, A.begin()+i+1);
        }
        else
            m[sum] =i;
    }
    return ans;
    
}
