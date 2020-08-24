class Solution {
public:
    vector<string> result;
    
    void helper(string s,int left,int more_left){
        if(left==0 && more_left==0){
            result.push_back(s);
            return ;
            
        }
        if(left> 0)
            helper(s+'(',left-1,more_left+1);
        if(more_left>0)
            helper(s+')',left,more_left-1);
        
    }
    vector<string> generateParenthesis(int n) {
        helper("",n,0);
        return result;
    }
};
