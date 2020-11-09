int Solution::solve(vector<int> &a) {
    int n=a.size();
int s=0,mx=0;
unordered_map<int,int> m;

for(int i=0;i<n;i++){
    if(a[i]==0){
        s--;
    }   
    else{
        s++;
    }
    if(s==1){
        mx=i+1;
    }
    else if(m.find(s)==m.end()){
        m[s]=i;
    }
    if(m.find(s-1)!=m.end()){
        mx=max(mx,i-m[s-1]);
    }
}

return mx;
}
