vector<vector<int> > Solution::threeSum(vector<int> &A) {
    int n = A.size();
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    set<vector<int>> set_of_vector;
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        int j = i + 1;
        int k = n - 1;
        long x = A[i];
        while(j < k)
        {
            if(x + A[j] + A[k] == 0)
            {
                vector<int> data(3);
                data[0] = A[i];
                data[1] = A[j];
                data[2] = A[k];
                set_of_vector.insert(data);
                count++;
                j++;
                k--;
            }
            else if(x + A[j] + A[k] > 0)
                k--;
            else 
                j++;
        }
    }
    
    for(auto it = set_of_vector.begin(); it!=set_of_vector.end();it++)
    {
        ans.push_back(*it);
    }
    
    return ans;
}
