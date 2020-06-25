class Solution {
public:
    int findDuplicate(vector<int>& nums) {
            int t1=nums[0],h1=nums[0];
            while(true){
                
                t1=nums[t1];
                h1=nums[nums[h1]];
                if(h1==t1){
                    break;
                }
            }
            t1=nums[0];
            while (t1!=h1){
                t1=nums[t1];
                h1=nums[h1];
            }
        return h1;
    }
};
