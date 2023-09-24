class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long int target) {
        vector<vector<int>>set;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int rem = target-nums[i]-nums[j];
                  int c=j+1;
                   int d=n-1;
                   while(c<d){
                   if(nums[c]+nums[d]<rem){
                       c++;
                   }
                    else if(nums[c]+nums[d]>rem){
                       d--;
                    }
                    else{
                        vector<int>v(4);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[c];
                        v[3]=nums[d];
            set.push_back(v);
            while(c<d &&nums[c+1]==nums[c]){
                c++;
            }
             while(c<d &&nums[d-1]==nums[d]){
                d--;
            }
            c++;
            d--;
                   }
            }
            while(j+1<n && nums[j+1]==nums[j]){
                j++;
            }
            }
             while(i+1<n && nums[i+1]==nums[i]){
                i++;
            }
        }
return set;
    }
};
