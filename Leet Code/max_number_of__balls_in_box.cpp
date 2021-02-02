class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int cnt[46]={};
        int mx=0;
        for(int i=lowLimit;i<=highLimit;++i){
            int num=i, sum=0;
            while(num>0){
                sum += num%10;
                num /= 10;
            }
            mx = max(mx,++cnt[sum]);
        }
        return mx;
    }
};
