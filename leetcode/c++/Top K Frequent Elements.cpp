class Solution {
public:
    static bool comp(pair<int,int> &a, pair<int,int> &b)
    {
        return a.second > b.second;  
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            table[nums[i]]++;
        }
        
        vector<pair<int, int>> temp;
        for(auto i: table)
        {
            pair<int, int> p;
            p = make_pair(i.first, i.second);
            temp.push_back(p);
        }
        
        std::sort(temp.begin(), temp.end(), comp);
        for(int i=0; i<k; i++)
        {
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};
