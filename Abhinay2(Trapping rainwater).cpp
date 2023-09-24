class Solution {
public:
    int trap(vector<int>& arr) {
       
        /*int watertrapped=0;
        for(int i=0;i<arr.size();i++){
            int j=i;
             int leftmax=0;int rightmax=0;
            while(j>=0){
                leftmax=max(arr[j],leftmax);
                j--;
            }  ///O(N^2)
            j=i;
            while(j<arr.size()){
                rightmax=max(arr[j],rightmax);
                j++;
            }
            watertrapped+=min(leftmax,rightmax)-arr[i];     
            

        }
        return watertrapped;*/
        /*int  n=arr.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
              prefix[i]=max(prefix[i-1],arr[i]);
        }
        suffix[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],arr[i]);
        }
        int watertrapped=0;
        for(int i=0;i<n;i++){
          watertrapped+=(min(prefix[i],suffix[i]))-arr[i];
        }
        return watertrapped;*/
        int ans=0;
        stack<int>st;
        int n=arr.size();
        for(int i=0;i<n;i++){
            while((!st.empty())&&(arr[st.top()]<arr[i])){
                int poped=arr[st.top()];
                st.pop();
                if(st.empty()){
                    break;
                }
                int distance=i-st.top()-1;
                int height=min(arr[i],arr[st.top()])-poped;
                ans+=distance*height;
            }
            st.push(i);
        }
        return ans;
    }

};
