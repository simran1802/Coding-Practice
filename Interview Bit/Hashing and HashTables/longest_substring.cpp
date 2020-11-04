int Solution::lengthOfLongestSubstring(string A) {
    unordered_map<char,int> mp;
    int max_len=0, i=0, j=0;
    int len = A.size();
    while(i<len){
        if(mp.count(A[i])==0){
            mp.insert({A[i++],0});
            max_len = max(max_len,i-j);
        }
        else
            mp.erase(A[j++]);
        
        
    }
    return max_len;
}
