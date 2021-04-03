class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int ans=0, mod=1e9+7;
        unordered_map<int,int> count;
        for(int &n:nums){
            ans = (ans+count[n-rev(n)]++)%mod;
        }
        return ans;
    }
    
    int rev(int n){
        int rem,r=0;
        while(n!=0){
            rem = n%10;
            r = r*10+rem;
            n /= 10;
        }
        return r;
    }
};
