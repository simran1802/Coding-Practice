vector<string> split_string(string);

// Complete the hackerlandRadioTransmitters function below.
int hackerlandRadioTransmitters(vector<int> x, int k) {
    sort(x.begin(),x.end());
     int count=0;
     int i=0;
     int n=x.size();
     while(i<n)
     {
         int j=i+1;
         while(x[i]+k>=x[j]&&j<n)
         {
             j++;
         }

         int l=j;
         j--;
         while(x[j]+k>=x[l] && l<n)
         {
             l++;
         }
         count++;
         i=l;
     }
    return count;
}
