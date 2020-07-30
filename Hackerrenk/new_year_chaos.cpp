void minimumBribes(vector<int> q) {
    int count=0;
    bool ans= true;
    int n= q.size();

    for(int i=0;i<n;i++){
        if(q[i] > i+3){
            ans=false;
        }
    }

    for(int i=0;i<n;i++){
        if(q[i]!=i+1){
            for(int j=i+1;j<n;j++){
                if(q[j] == i+1){
                    for(int k=j;k>=i+1;k--){
                        q[k]=q[k-1];
                        count++;
                    }
                    q[i] =i+1;
                    break;


                }
            }
        }
    }
    if(ans){
        cout<<count<<"\n";
    
    }
    else{
        cout<<"Too chaotic"<<"\n";
    }
}
