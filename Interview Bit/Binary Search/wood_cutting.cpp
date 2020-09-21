#define ll long long int

int Solution::solve(vector<int> &A, int B) {
    ll i=0,n=A.size(),max_height = *max_element(A.begin(), A.end()), res=0;
    vector<ll> heights(max_height+2,0);
    for(int i=0;i<n;i++){
        heights[A[i]]++;
    }
    for(i=max_height;i>=0 && res<B;i--){
        heights[i] += heights[i+1];
        res += heights[i];
        
    }
    return i;
    
}
