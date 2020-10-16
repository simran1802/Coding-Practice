vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    deque<pair<int,int>> window;
    for(int i=0;i<A.size();i++){
        while(!window.empty() && window.back().first <= A[i])
            window.pop_back();
        window.push_back(make_pair(A[i],i));
        while(window.front().second <= i-B)
            window.pop_front();
        if(i>=B-1)
            cout << (window.front().first) << ' ';
    }
    return {};
}
