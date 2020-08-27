int minimumSwaps(vector<int> arr) {
    int swap = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] != (i+1)){
            int t=i;
            while(arr[t] != i+1){
                t++;
            }
            int temp = arr[t];
            arr[t] = arr[i];
            arr[i] = temp;
            swap++;
        }
    }
    return swap;
    

}
