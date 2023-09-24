vector<int> countGreater(vector<int>&arr, vector<int>&query) {
    // Write your code here.
    vector<int>q;
    /*for(int i=0;i<query.size();i++){
        int temp=query[i];
        int count=0;/////////O(N)//////////////
        for(int j=temp+1;j<arr.size();j++){
            if(arr[j]>arr[temp]){
                   count++;
            }
        }
        q.push_back(count);
    }*/
    int n=arr.size();
    stack<int>st;
    st.push(-1);
    int i=n-1;
    while(i>=0){
        int count=0;
        if(arr[i]>st.top()){
            st.push(arr[i]);
        }
        else{
            vector<int>ans;
            while(st.top()>arr[i]){
                ans.push_back(st.top());
                st.pop();
                count++;
            }
            st.push(arr[i]);
            for(int i=ans.size()-1;i>=0;i--){
                st.push(ans[i]);
            }
            
        }
        arr[i]=count;
        i--;

    }
    for(int i=0;i<query.size();i++){
        int temp=query[i];
        q.push_back(arr[temp]);
    }
    return q;

}
