int Solution::majorityElement(const vector<int> &A) {
    int n=A.size(),k=floor(n/2),ans=0;
    unordered_map<int,int> mp;
    if(n==1)
        return A[0];
        for(int i=0;i<n;i++){
    if(mp.find(A[i])==mp.end())
        mp[A[i]]=1;
    else
        mp[A[i]]++;
    if(mp[A[i]] > k){
        ans=A[i];
        break;
        
    }
            
        }
    return ans;
}
