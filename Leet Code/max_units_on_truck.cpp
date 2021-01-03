class Solution {
public:
    
    static bool mysort(vector<int> a,vector<int> b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),mysort); 
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]<truckSize){
                ans += (boxTypes[i][0]*boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }
            else{
                ans += (boxTypes[i][1]*truckSize);
                break;
            }
        }
        return ans;
    }
};
