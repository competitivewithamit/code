class Solution {
public:
    
    int twoCitySchedCost(vector<vector<int>>& v1) {
        sort(v1.begin(),v1.end(),[&](vector<int>  a,vector<int>b){
            return a[0]-a[1]>b[0]-b[1];
        }) ;
        int ans=0 ,n=v1.size();
        for(int i=0;i<n;i++){
            if (i<n/2){
                ans+=v1[i][1];
            }
            else{
                ans+=v1[i][0];
            }
        }
        return ans;
    }
};
