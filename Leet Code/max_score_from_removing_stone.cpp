class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> q;
        int ans=0;
        q.push(a);
        q.push(b);
        q.push(c);
        
        while(q.size() >= 2){
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            ans++;
            a--;
            b--;
            if(a!=0)
                q.push(a);
            if(b!=0)
                q.push(b);
        }
        return ans;
    }
};
