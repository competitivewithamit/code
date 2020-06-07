class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& v1) {
        sort(v1.begin(), v1.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });
        vector<vector<int>> ans;        
        for(auto& p: v1)
                ans.insert(ans.begin() + p[1], p);                
        return ans;        
    }
};
