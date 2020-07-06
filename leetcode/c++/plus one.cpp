class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1, sum = 0;
        int size = digits.size();
        vector<int> ans(digits);
        if (digits[size - 1] != 9) {
            ans[size - 1] += 1;
            return ans;
        }
        for (int i = size - 1; i >= 0; i--) {
            sum = carry + digits[i];
            carry = sum / 10;
            ans[i] = sum % 10;
        }
        if (ans[0] == 0) {
            ans.push_back(0);
            ans[0] = 1;
        }
        return ans;
    }
};
