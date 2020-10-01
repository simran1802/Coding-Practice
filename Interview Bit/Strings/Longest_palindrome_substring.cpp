string Solution::longestPalindrome(string A) {
    int strLen = A.length();
    if (strLen == 1)
        return A;
    
    int i = 0, start, end, maxLen = 0, maxIdx = 0;
    
    while (i < strLen) {
        int start = end = i;
        while (end + 1 < strLen && A[start] == A[end + 1])
            end++;
    
        i = end + 1;
        while (start - 1 > -1 && end + 1 < strLen && A[start - 1] == A[end + 1]) {
            start--;
            end++;
        }
    
        if (end - start + 1 > maxLen) {
            maxLen = end - start + 1;
            maxIdx = start;
        }
    }
    
    return A.substr(maxIdx, maxLen);
}
