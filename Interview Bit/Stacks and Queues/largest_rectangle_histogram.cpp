int Solution::largestRectangleArea(vector<int> &A) {
    A.push_back(0);
    int n = A.size();
    int area = 0;
    stack<int> index;
    for(int i=0;i<n;i++){
        while(!index.empty() && A[index.top()] > A[i]){
            int h = A[index.top()];
            index.pop();
            int l = index.empty() ? -1 : index.top();
            area = max(area,h*(i-l-1));
        }
        index.push(i);
    }
    return area;
    
}
