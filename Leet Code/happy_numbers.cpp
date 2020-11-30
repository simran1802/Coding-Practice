class Solution {
public:
    int dig_sum(int n){
        int s=0,t;
        while(n){
            t=n%10;
            s += t*t;
            n=n/10;
        }
        return s;
    }
    
    bool isHappy(int n) {
        int s,f;
        s=f=n;
        do{
           s = dig_sum(s);
           f = dig_sum(f);
           f = dig_sum(f);
        }
        while(s!=f);
        if(s==1)
            return 1;
        return 0;
    }
};
