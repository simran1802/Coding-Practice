bool palin(string s) {
    int i = 0, len = s.length();
    while(i<len/2 and (s[i] == s[len-1-i])) i++;
    return (i == len/2);
}
void split(string A, vector<vector<string> > &res, vector<string> &vec) {
    if (A.size() == 0)  {
        res.push_back(vec);
        return;
    }
    for (int len=1; len <= A.size(); len++) {
        if (palin(A.substr(0, len))) {
            vec.push_back(A.substr(0, len));
            split(A.substr(len), res, vec);
            vec.pop_back();
        }
    }
}

vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string>> res;
    vector<string> vec;
    split(A,res,vec);
    return res;
}
