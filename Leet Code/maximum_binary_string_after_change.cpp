class Solution {
public:
    string maximumBinaryString(string binary) {
        int ones=0, zeroes=0, n=binary.size();
        for(auto &c:binary){
            if(c=='0')
                zeroes++;
            else if(zeroes==0)
                ones++;
            c='1';
        }
        if(ones<n)
            binary[ones+zeroes-1]='0';
        return binary;
    }
};
