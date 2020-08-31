class Solution {
public:
    unordered_set<int> res;
    bool canReach(vector<int>& arr, int start) {
        if(start>=0 && start<arr.size() && res.insert(start).second){
            return arr[start] == 0 || canReach(arr,start+arr[start]) || canReach(arr,start-arr[start]);
        }
        return false;
    }
};
