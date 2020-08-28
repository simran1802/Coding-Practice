class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> items;
        
        for(auto s:tokens){
            if(s.size() > 1 || isdigit(s[0]))
                items.push(stoi(s));
            else{
                auto b = items.top();
                items.pop();
                auto a = items.top();
                items.pop();
                
                switch(s[0]){
                    case '+': a += b;
                        break;
                    case '-' : a -= b;
                        break;
                    case '*': a*= b;
                        break;
                    case '/': a /= b;
                        break;
                        
                }
                items.push(a);
                
            }
        }
        return items.top();
    }
};
