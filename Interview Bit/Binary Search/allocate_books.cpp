int checkpos(vector<int> &A,int B,int i,int num,int x){
    if(B==0 && i<A.size())
        return 0;
    if(B==0)
        return 1;
    if(i==A.size())
        return 1;
    if(A[i]>num)return 0;
    if(A[A.size()-1]<=num){
        return checkpos(A,B-1,A.size(),A[A.size()-1]+x,x);
    }
    auto it=lower_bound(A.begin()+i,A.end(),num);
    if(*it>num)it--;
    int j=it-A.begin();
    return checkpos(A,B-1,j+1,*it+x,x);
}

int Solution::books(vector<int> &A, int B) {
    if(B>A.size())return -1;
    for(int i=1;i<A.size();i++)A[i]=A[i-1]+A[i];
    int l=A[0], r=A[A.size()-1];
    int ans=-1;
    while(r>=l){
        int m=(r+l)/2;
        int x=checkpos(A,B,0,m,m);
        // cout<<x<<endl;
        if(x==1){
            ans=m;
            r=m-1;
        } else if(x==2){
            r=m-1;
        } else {
            l=m+1;
        }
    }
    return ans;
}
