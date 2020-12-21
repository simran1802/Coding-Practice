class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> j(jewels.begin(),jewels.end());
        int res=0;
        for(char ch:stones){
            if(j.count(ch))
                res++;
        }
        return res;
    }
};
