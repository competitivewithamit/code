class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        if (nums.size() < 3)
            return res;

        int vmin = nums[0], vmax = nums[0];
        for (int n : nums)
        {
            if (n < vmin)
                vmin = n;
            if (n > vmax)
                vmax = n;
        }
        vector<int> cnt(vmax - vmin + 1);
        for (int n : nums){
            ++cnt[n - vmin];
        }
        if (vmin <= 0 && 0 <= vmax && cnt[-vmin] == 2)
            cnt[-vmin] = 1;
        vector<int> vals;
        for (int i = 0; i < cnt.size(); ++i)
            if (cnt[i])
                vals.push_back(i + vmin);
        for (int i = 0; i < vals.size(); ++i)
        {
            int n1 = vals[i];
            for (int j = i + (cnt[n1 - vmin] <= 1); j < vals.size(); ++j)
            {
                int n2 = vals[j], n3 = -(n1 + n2);
                if (n3 < n2)
                    break;
                if (n3 <= vmax && cnt[n3 - vmin] > (n2 == n3)){
                    res.push_back({n1, n2, n3});
                    cout<<"hi"<<endl;
                }
            }
            cout<<endl;
        }
        return res;
    }
};
