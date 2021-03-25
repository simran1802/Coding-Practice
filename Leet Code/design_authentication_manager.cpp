class AuthenticationManager {
public:
    int time;
    unordered_map<string,int> mp;
    
    AuthenticationManager(int timeToLive) {
        time = timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        mp[tokenId] = currentTime;
    }
    
    void renew(string tokenId, int currentTime) {
        if(mp.find(tokenId)!= mp.end() && mp[tokenId]+time > currentTime)
            mp[tokenId] = currentTime;
    }
    
    int countUnexpiredTokens(int currentTime) {
        int count=0;
        for(auto i:mp)
            if(i.second + time > currentTime)
                count++;
        return count;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */
