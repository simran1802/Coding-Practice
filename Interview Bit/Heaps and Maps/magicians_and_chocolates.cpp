int Solution::nchoc(int A, vector<int> &B) {
    long long sum = 0;
    int i=0;
    priority_queue<int> max_heap;
    for(i=0;i<B.size();i++){
        max_heap.push(B[i]);
    }
    for(i=0;i<A;i++){
        long long top = max_heap.top();
        sum += top;
        max_heap.pop();
        max_heap.push(floor(top/2));
        // i++;
    }
    sum = sum % (long long)(pow(10,9)+7);
    return sum;
}
